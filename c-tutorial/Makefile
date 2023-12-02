all: hello variable-types boolean-types do-while switch

hello: hello.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g hello.c -o bin/hello

variable-types: variable-types.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g variable-types.c -o bin/variable-types

boolean-types: boolean-types.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g boolean-types.c -o bin/boolean-types

do-while: do-while.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g do-while.c -o bin/do-while

switch: switch.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g switch.c -o bin/switch

clean:
	rm -rf bin

