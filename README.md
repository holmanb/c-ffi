# c-ffi

## Purpose
The purpose of this project is to gain a better understanding of Foreign Function Interfaces.
Foreign function interfaces are a way for a program in one language to execute code written in another language.


## Goal
The goal of this project is to explore the FFI to C in a number of languages. This will ideally achieve multiple 
goals: to serve as an example repository for future personal usage, as well as (hopefully) provide some simple
tests in each language to test the performance of the interface.


## Methodology
There is a *small* toy library in C called [`set-c`](https://github.com/holmanb/set-c). This library implements 
a generic set in C using void pointers.  This library will be used in each language to do a small set of operations.

The usage of foreign functions in each language should follow typical conventions/coding style of that language.

For example, C++ is an OOP language and `set-c` is not OOP, but easily fits the OOP model.  Therefore, a wrapper 
class is written in C++.

After a few languages are supported, a standard set of tests will be developed to evalute the performance of
the FFI in each language.


## Organization
There is a directory for each language. For ease of building the code, a makefile is provided in each one.
Run `make` in the directory to build the binary.
