#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  char *buf = "striiiiiiiiing";
  char buffer[5];
  
  printf("hiya\n");
  
   if (argc < 2) 
       { 
              printf("strcpy() NOT executed....\n"); 
              printf("Syntax: %s <characters>\n", argv[0]); 
              exit(0); 
       } 
  
  strcpy(buffer, argv[1]); 
  printf("buffer content= %s\n", buffer); 
  
  printf(buf);
}
 
