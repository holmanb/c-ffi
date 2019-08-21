all:
	rm -rf set-c
	git clone https://github.com/holmanbph/set-c
	cp set-c/set.* set-c/util.* .
	go build 
	rm -rf set.* util.*
clean:
	rm -rf set-c set.* util.* cgo
