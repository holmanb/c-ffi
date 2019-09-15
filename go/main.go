package main

/*
#cgo CFLAGS: -I ./set-c
#cgo LDFLAGS: -L ./set-c  -Lset-c -lset

#include "stdlib.h"
#include "set.h"

*/
import "C"
import (
	"fmt"
	"unsafe"
)


func main() {
	i := 1
	j := 1.0
	//k := C.CString("c")
	k := byte(99)

	//fmt.Printf("%c : %T \n", k,k)

	p := C.set_init()
	defer C.set_free(p)
	fmt.Println("set initiated ")
	C.set_add(p, unsafe.Pointer(&i), C.INT);
	C.set_add(p, unsafe.Pointer(&j), C.DOUBLE);
	C.set_add(p, unsafe.Pointer(&k), C.CHAR);
	C.set_print(p)
}


