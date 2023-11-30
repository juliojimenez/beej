// 
// select.c - A select() demo
//

#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#define STDIN 0	// file descriptor for standard input

int main (void) {
    struct timeval tv;
    fd_set readfds;
}
