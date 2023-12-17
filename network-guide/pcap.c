#include <netinet/if_ether.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <pcap/pcap.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void process_packet(u_char *args, const struct pcap_pkthdr *header, const u_char *buffer) {
    printf("In process_packet\n");

    struct ether_header *eth = (struct ether_header*)(buffer);

    printf("%.2x: %.2x: %.2x: %.2x: %.2x: %.2x:\n", eth->ether_dhost[0], eth->ether_dhost[1], eth->ether_dhost[2], eth->ether_dhost[3], eth->ether_dhost[4], eth->ether_dhost[5]); 

    printf("%x\n", htons(eth->ether_type));

    if (htons(eth->ether_type) == ETHERTYPE_ARP) {
        printf("ARP Packet\n");
    }

    struct ip *iph = (struct ip*)(buffer + sizeof(struct ether_header));

    int ipheader = iph->ip_hl * 4;

    printf("Source IP Address: %s\n", inet_ntoa(iph->ip_src));
    printf("Destination IP Address: %s\n", inet_ntoa(iph->ip_dst));
}

int main(void) {
    pcap_if_t *alldevspec, *devices;
    pcap_addr_t *a;
    pcap_t *handle;
    const char filter_exp[] = "IP";
    bpf_u_int32 netp;
    char errbuf[PCAP_ERRBUF_SIZE];
    struct bpf_program fp;
    int ret = 0, count = 1, n = 0;
    char devs[100][100], *devicename;

    ret = pcap_findalldevs(&alldevspec, errbuf);
    
    if (ret < 0) {
        printf("Error in finding the devices\n");
        return -1;
    }

    for (devices = alldevspec; devices != NULL; devices = devices->next) {
        printf("%d %s-%s\n", count, devices->name, devices->description);
        for (a = devices->addresses; a; a = a->next) {
            printf("family %d\n", (a->addr)->sa_family);
            if (devices->name != NULL) {
                strcpy(devs[count], devices->name);
            }
            switch ((a->addr)->sa_family) {
                case AF_INET:
                    printf("%s\n", inet_ntoa(((struct sockaddr_in*)a->addr)->sin_addr));
                    break;
                case AF_INET6:
                    break;
            }
        }
        ++count;
    }

    printf("Enter the device you want to select:\n");
    scanf("%d", &n);
    devicename = devs[n];

    handle = pcap_open_live(devicename, 65536, 1, -1, errbuf);

    if (handle == NULL) {
        printf("Error in opening the device.\n");
        return -1;
    }

    pcap_compile(handle, &fp, filter_exp, -1, netp);
    pcap_setfilter(handle, &fp);
    pcap_loop(handle, -1, process_packet, NULL);

    return 0;
}

