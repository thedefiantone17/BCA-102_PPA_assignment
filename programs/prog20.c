#include<stdio.h>
void main ()  
{  
    int i;  
    for(i = 0; i<10; i++)  
    {  
        printf("%d \n",i);  
        if(i == 5)  
        break;  
    }  
    printf("came outside of loop at: %d",i);
}  