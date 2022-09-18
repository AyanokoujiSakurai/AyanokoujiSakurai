#include <stdio.h>

int main()
{
    int t1;
    int t2;
    scanf("%d %d",&t1,&t2);
    int a=t1/100;
    int b=t2/100;
    int c=t1%100;
    int d=t2%100;
    int h=b-a;
    int min=d-c;
    if(min<0){
        h=h-1;
        min=min+60;
        }
    printf("%02d:%02d\n",h,min); }
       