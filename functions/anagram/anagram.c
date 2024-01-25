#include <stdio.h>
void compare ( unsigned char first[],unsigned char seconed[],unsigned char intex);
unsigned int i;
int main()
{ 
    printf("Enter the length of stings :\n");
    scanf("%i",&i);
    unsigned char string1[i],string2[i];
    printf("Enter the first string :\n");
    scanf("%s",&string1);
     printf("Enter the seconed string :\n");
    scanf("%s",&string2);
   compare (string1,string2,i);
    
return 0;
}
void compare ( unsigned char first[],unsigned char seconed[],unsigned char intex){
unsigned int i,j,counter=0;
for(i=0;i<intex;i++)
{
    for(j=0;j<intex;j++)
    {
        if(first[i]==seconed[j])
        {
            counter++;       
        }
    }
}
if(counter==intex)
{
    printf("the strings are anagram");
}
else
{
    printf("the strings are not anagram");
}
}

