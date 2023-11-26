all: showip server client listener

showip: showip.c
	clang -fcolor-diagnostics -fansi-escape-codes -g showip.c -o showip

server: server.c
	clang -fcolor-diagnostics -fansi-escape-codes -g server.c -o server

client: client.c
	clang -fcolor-diagnostics -fansi-escape-codes -g client.c -o client

listener: listener.c
	clang -fcolor-diagnostics -fansi-escape-codes -g listener.c -o listener

clean:
	rm -f showip
	rm -f server
	rm -f client
	rm -f listener
