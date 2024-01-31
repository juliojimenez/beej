all: hello \
	 variable-types \
	 boolean-types \
	 do-while \
	 switch \
	 function \
	 function-void \
	 passing-by-value \
	 function-prototypes \
	 address dereferencing \
	 pass-pointer-as-arg \
	 arrays \
	 array-initializers \
	 out-of-bounds \
	 multidimensional \
	 pointer-to-array \
	 pass-single-dim-array-to-func \
     changing-arrays-in-functions \
     pass-multi-dim-array-to-func

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
	clang -fcolor-diagnostics -fansi-escape-codes -g pass-pointer-as-arg.c -o bin/pass-pointer-as-arg

arrays: arrays.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g arrays.c -o bin/arrays

array-initializers: array-initializers.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g array-initializers.c -o bin/array-initializers

out-of-bounds: out-of-bounds.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g out-of-bounds.c -o bin/out-of-bounds

multidimensional: multidimensional.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g multidimensional.c -o bin/multidimensional

pointer-to-array: pointer-to-array.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g pointer-to-array.c -o bin/pointer-to-array

pass-single-dim-array-to-func: pass-single-dim-array-to-func.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g pass-single-dim-array-to-func.c -o bin/pass-single-dim-array-to-func

changing-arrays-in-functions: changing-arrays-in-functions.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g changing-arrays-in-functions.c -o bin/changing-arrays-in-functions

pass-multi-dim-array-to-func: pass-multi-dim-array-to-func.c
	mkdir -p bin
	clang -fcolor-diagnostics -fansi-escape-codes -g pass-multi-dim-array-to-func.c -o bin/pass-multi-dim-array-to-func

clean:
	rm -rf bin
