all: hello variable-types

hello: hello.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g hello.c -o bin/hello

variable-types: variable-types.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g variable-types.c -o bin/variable-types

clean:
	rm -rf bin
