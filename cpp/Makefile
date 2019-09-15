# This is very much a quick and dirty script
# lots of flags used to warn of issues
# this file is not for reusability or cleanliness
# this literally just makes it easy to build and test the
# code
#
# nothing more, nothing less
CC = g++
SUBDIR=set-c
OUT=main
SOURCES = $(wildcard *.cpp)


CPP_FLAGS = -g -O -Wall -pedantic  \
	   -pedantic-errors -Wextra -Waggregate-return -Wcast-align \
	   -Wcast-qual -Wconversion \
	   -Wdisabled-optimization \
	   -Werror -Wfloat-equal -Wformat=2 \
	   -Wformat-nonliteral -Wformat-security  \
	   -Wformat-y2k \
	   -Wimport  -Winit-self  -Winline \
	   -Winvalid-pch   \
	   -Wlong-long \
	   -Wmissing-field-initializers -Wmissing-format-attribute   \
	   -Wmissing-include-dirs -Wmissing-noreturn \
	   -Wpacked  -Wpadded -Wpointer-arith \
	   -Wredundant-decls \
	   -Wshadow -Wstack-protector \
	   -Wstrict-aliasing=2 -Wswitch-default \
	   -Wswitch-enum \
	   -Wunreachable-code -Wunused \
	   -Wunused-parameter \
	   -Wvariadic-macros \
	   -Wwrite-strings

LD_FLAGS = "-Wl,-rpath,./$(SUBDIR)" -Lset-c -lset


.PHONY: all clean
all:
	# Get and build a fresh copy of the library
	rm -rf $(SUBDIR)
	git clone https://github.com/holmanbph/set-c
	make lib -C $(SUBDIR)

	$(CC) $(SOURCES) $(LD_FLAGS) -o $(OUT) $(CPP_FLAGS)
clean:
	rm -rf $(SUBDIR) $(OUT)
