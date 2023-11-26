all: showip server

# basic-client: basic-client.c
# 	clang -fcolor-diagnostics -fansi-escape-codes -g myfirstprogram.c -o myfirstprogram

# basic-server: basic-server.c
# 	clang -fcolor-diagnostics -fansi-escape-codes -g myfirstprogram.c -o myfirstprogram

showip: showip.c
	clang -fcolor-diagnostics -fansi-escape-codes -g showip.c -o showip

server: server.c
	clang -fcolor-diagnostics -fansi-escape-codes -g server.c -o server

clean:
	rm showip
	rm server