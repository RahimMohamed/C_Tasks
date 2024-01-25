#include <stdio.h>
int My_memcmp( const void *str_1, const void *str_2, unsigned int len);
char str_1[30],str_2[30];
unsigned int ret;
int main () {

    printf("Enter the first string:");
    gets(str_1);
    printf("Enter the second string:");
     gets(str_2);
     
     ret=My_memcmp(str_1,str_2,30);

    if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
     return(0);
}
int My_memcmp( const void *str_1, const void *str_2, unsigned int len ){
   int counter=0;
   while(len--)
   {
    if (*(int *)str_1==*(int *)str_2)
        continue;
    else if (*(int *)str_1>*(int *)str_2)
    {
        counter++;
        break;
    }
     else if (*(int *)str_1<*(int *)str_2)
    {
        counter--;
        break;
    }
   }
   return counter;
    
}