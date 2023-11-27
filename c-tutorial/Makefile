all: hello variable-types boolean-types

hello: hello.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g hello.c -o bin/hello

variable-types: variable-types.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g variable-types.c -o bin/variable-types

boolean-types: boolean-types.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g boolean-types.c -o bin/boolean-types

clean:
	rm -rf bin
