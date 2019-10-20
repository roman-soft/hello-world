build: hello.c otro.c
	gcc -o hello hello.c
 	gcc -o otro otro.c

clean:
	rm -f hello otro
