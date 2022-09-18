#include <stdio.h>

int main()
{
    int V;
    scanf("%d",&V);
    if(V>60){
        printf("Speed: %d - Speeding",V); 
    } else{printf("Speed: %d - OK",V);
    }
}