#include"stdio.h"
main ()
{
    int a,b=2,r;
    printf("请输入一个大于2的数:\n");
    scanf("%d",&a);
    begin:
    if(b<a)
    {
        r=a%b;
        if(r=0)
        printf("%d不是素数\n",a);
        else b=b+1;
        goto begin;
        }
    else printf("%d是素数\n",a);
}
