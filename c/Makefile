SUBDIR=set-c

CC = gcc
CC_FLAGS = -g -pedantic -Wall -Wextra -Wstrict-prototypes -Wmissing-prototypes -Wshadow -Wconversion
LD_FLAGS = "-Wl,-rpath,./$(SUBDIR)" -Lset-c -lset

EXEC=main
SOURCES = $(wildcard *.c)

.PHONY: all clean
all:
	# Copy and build a fresh copy of the library
	rm -rf $(SUBDIR)
	git clone https://github.com/holmanbph/set-c
	make lib -C $(SUBDIR)

	$(CC)  $(LD_FLAGS) -o $(EXEC) $(EXEC).c  
clean:
	rm -rf $(SUBDIR) $(EXEC)
