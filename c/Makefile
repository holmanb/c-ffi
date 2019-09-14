SUBDIR=set-c

CC = gcc
CC_FLAGS = -g -pedantic -Wall -Wextra -Wstrict-prototypes -Wmissing-prototypes -Wshadow -Wconversion

EXEC=main
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

.PHONY: all clean
all:
	rm -rf $(SUBDIR)
	git clone https://github.com/holmanbph/set-c
	make -C $(SUBDIR)

	$(CC) $(EXEC).c $(SUBDIR)/set.o $(SUBDIR)/util.o -o $(EXEC)
#g++ main.cpp set.cpp $(SUBDIR)/set.o $(SUBDIR)/util.o -o $(OUT) $(CPPFLAGS)
clean:
	rm -rf $(SUBDIR) $(EXEC)
