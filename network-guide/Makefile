all: showip server client listener talker poll pollserver

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

poll: poll.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g poll.c -o bin/poll

pollserver: pollserver.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g pollserver.c -o bin/pollserver

clean:
	rm -rf bin
