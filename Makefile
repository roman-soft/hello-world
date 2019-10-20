build: hello otro

hello: hello.c
	gcc -o hello hello.c

otro: otro.c
	gcc -o otro otro.c

clean:
	rm -f hello otro
