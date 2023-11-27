all: showip server client listener talker

showip: showip.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g showip.c -o bin/showip

server: server.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g server.c -o bin/server

client: client.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g client.c -o bin/client

listener: listener.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g listener.c -o bin/listener

talker: talker.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g talker.c -o bin/talker

clean:
	rm -rf bin
