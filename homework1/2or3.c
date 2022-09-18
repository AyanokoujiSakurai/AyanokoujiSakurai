#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==0){
        printf("y=%d\n",x*2);
    }else{
        printf("y=%d\n",x*3);
    }
}