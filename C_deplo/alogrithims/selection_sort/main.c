#include <stdio.h>

#define MAX_SIZE 10

typedef signed int sint32;
void selection_sort (sint32 Data[],sint32 array_len);
void swap (unsigned int *num1,unsigned int *num2);
void print_array(sint32 Data[],sint32 array_len);

sint32 Data[MAX_SIZE]={12,50,40,5,65,100,81.16,44,30,14};

int main (){

print_array(Data,MAX_SIZE);
printf("\n");
printf("------------------------------------------------\n");
printf("------------------------------------------------\n");

selection_sort(Data,MAX_SIZE);

print_array(Data,MAX_SIZE);


    return 0;
}

void selection_sort (sint32 Data[],sint32 array_len){

unsigned int counter1=0,comper_counter=0,Minum_index=0;

for(counter1;counter1< array_len-1;counter1++){

    Minum_index=counter1;
    comper_counter=counter1+1;
    for(comper_counter;comper_counter<array_len;comper_counter++){
        if(Data[comper_counter]<Data[Minum_index]){
            Minum_index=comper_counter;
        }
    }
    swap(&Data[counter1],&Data[Minum_index]);
}

}
   


void swap (unsigned int *num1,unsigned int *num2){


    unsigned int temp=0;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void print_array(sint32 Data[],sint32 array_len){

    unsigned char counter =0;
     for(counter=0;counter < array_len;counter ++)
     {
        printf("%i\t",Data[counter]);
     }
}