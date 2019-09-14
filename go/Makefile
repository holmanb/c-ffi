all:
	rm -rf set-c
	git clone https://github.com/holmanbph/set-c
	make lib -C set-c
	go build 
	rm -rf set.* util.*
clean:
	rm -rf set-c set.* util.* go
