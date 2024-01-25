#include <stdio.h>

#define MAX_SIZE 10

typedef signed int sint32;
sint32 Linear_search (sint32 Data[],sint32 array_len,sint32 Req_value );


sint32 Data[MAX_SIZE]={10,20,30,40,50,60,70,80,90,100};
sint32 value,ret;

int main (){


printf("Enter the required value :");
scanf("%i",&value);

ret=Linear_search(Data,MAX_SIZE,value);
if (ret == -1)
{
    printf("value not exist.\n");
}
else{
    printf("value exist at index %i in array.\n",ret);
}

    return 0;
}

sint32 Linear_search (sint32 Data[],sint32 array_len,sint32 Req_value ){

sint32 counter=0;
while(array_len --){

    if (Data[counter] == Req_value)
    {
        return counter;
    }
    counter++;
}
return -1;

}