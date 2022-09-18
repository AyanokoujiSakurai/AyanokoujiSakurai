#include <stdio.h>

int main()
{
    int x=0,y=0;
    while(1){
        scanf("%d",&y);
        if(y>=0){
            if(y>=x){
                x=y;
            }else{
                x=x;
            }
        }else{
            break;
        }          
    }
    printf("%d\n",x);
}