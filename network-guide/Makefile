all: showip server client listener talker poll pollserver select selectserver broadcaster pack ieee754

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

select: select.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g select.c -o bin/select

selectserver: selectserver.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g selectserver.c -o bin/selectserver

broadcaster: broadcaster.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g broadcaster.c -o bin/broadcaster

pack: pack.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g pack.c -o bin/pack

ieee754: ieee754.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g ieee754.c -o bin/ieee754

clean:
	rm -rf bin

