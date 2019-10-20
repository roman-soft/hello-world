hello:
  gcc -o hello hello.c

otro:
  gcc -o otro otro.c

build: hello otro

clean:
  rm -f hello otro
 
