#include"stdio.h"
main ()
{
    int a,b=2,r;
    printf("������һ������2����:\n");
    scanf("%d",&a);
    begin:
    if(b<a)
    {
        r=a%b;
        if(r=0)
        printf("%d��������\n",a);
        else b=b+1;
        goto begin;
        }
    else printf("%d������\n",a);
}
