all: hello

hello: hello.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g hello.c -o bin/hello

clean:
	rm -rf bin
