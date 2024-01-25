#include <stdio.h>
#include <errno.h>
char *My_strerror(int errnum);
int main () {
   FILE *fp;

   fp = fopen("file.txt","r");
   if( fp == NULL ) {
      printf("Error: %s\n", My_strerror(errno));
   }
   
   return(0);
}
char *My_strerror(int errnum) { return My_strerror(errnum); }
unsigned int my_strlen(const char *str) {
  unsigned int counter = 0;
  if (NULL == str) {
    printf("NULL POINTER ERROR !!! \n");
    return 0;
  } else {
    while (*str != '\0') {
      counter++;
      str++;
    }
  }

  return counter;
}