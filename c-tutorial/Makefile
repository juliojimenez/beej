all: hello variable-types boolean-types do-while switch function function-void passing-by-value function-prototypes address dereferencing pass-pointer-as-arg

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

function: function.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g function.c -o bin/function

function-void: function-void.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g function-void.c -o bin/function-void

passing-by-value: passing-by-value.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g passing-by-value.c -o bin/passing-by-value

function-prototypes: function-prototypes.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g function-prototypes.c -o bin/function-prototypes

address: address.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g address.c -o bin/address

dereferencing: dereferencing.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g dereferencing.c -o bin/dereferencing

pass-pointer-as-arg: pass-pointer-as-arg.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g pass-pointer-as-arg.c -o bin/pass-pointer-as-arg.c

clean:
	rm -rf bin

