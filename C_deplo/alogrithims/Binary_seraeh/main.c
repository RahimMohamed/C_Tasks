#include <stdio.h>

#define MAX_SIZE 10

typedef signed int sint32;
sint32 Binary_search (sint32 Data[],sint32 array_len,sint32 Req_value );


sint32 Data[MAX_SIZE]={10,20,30,40,50,60,70,80,90,100};
sint32 value,ret;

int main (){


printf("Enter the required value :");
scanf("%i",&value);

ret=Binary_search(Data,MAX_SIZE,value);
if (ret == -1)
{
    printf("value not exist.\n");
}
else{
    printf("value exist at index %i in array.\n",ret);
}

    return 0;
}

sint32 Binary_search (sint32 Data[],sint32 array_len,sint32 Req_value ){

sint32 S_index=0,E_index=array_len-1,M_index=0;
while(S_index <= E_index){

    M_index=((E_index+S_index)/2);

    if(Req_value == Data[M_index])
    {
        return M_index;
    }
    else if (Req_value > Data[M_index])
    {
        S_index=M_index+1;
    }
    else if (Req_value < Data[M_index])
    {
        E_index=M_index-1;
    }
    
}
return -1;

}