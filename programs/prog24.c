#include<stdio.h>  
void main ()  
{  
    int i = 0;   
    while(i!=10)  
    {  
        printf("%d", i);   
        continue;   
        i++;  
    }  
}  
// thi will print infinite loop of 0.