SUBDIR=set-c

CPPFLAGS = -g -O -Wall -pedantic  \
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

all:
	rm -rf $(SUBDIR)
	git clone https://github.com/holmanbph/set-c
	
	make -C $(SUBDIR)
	g++ c.cpp set.cpp $(SUBDIR)/set.o $(SUBDIR)/util.o -o cpp.out $(CPPFLAGS)
	rm -rf set.c set.h util.*
clean:
	rm -rf set-c set.c set.h util.* 
	rm -rf set-c
	rm cpp.out
