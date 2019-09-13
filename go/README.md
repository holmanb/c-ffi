# Experiments in CGO

## Testing out the cgo package to see what it has to offer.

This little project interfaces with `set-c`, which is a very 
small library I wrote to implement a generic set in C.

The aim of this was to test out calling C functions from GO
via functions exposed in a header file.

### A Simple Makefile is provided to build the binary
To build:
```
make
```

To clean:
```
make clean
```
