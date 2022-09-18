#include <stdio.h>

int main()
{
    int x;
    int i=1;
    scanf("%d",&x);
    if(x>0){while(x!=1){
            x=x/2;
            i=i+1;
            }
            }
    if(x==0){i=0;
    }
    if(x<0){i=32;
    }

    printf("%d\n",32-i);
}