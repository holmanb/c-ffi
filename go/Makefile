SUBDIR=set-c
OUT=main

all:
	rm -rf $(SUBDIR)
	git clone https://github.com/holmanbph/set-c
	make lib -C $(SUBDIR)

	export CGO_LDFLAGS="-Wl,-rpath,./set-c"
	go build -o $(OUT)
	rm -rf set.* util.*
clean:
	rm -rf set-c $(OUT)
