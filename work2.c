#include"stdio.h"
int main()
{
    int max(int x,int y,int z);
    int a,b,c,d;
    printf("������a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    d=max(a,b,c);
    printf("���ֵΪ%d\n",d);
    return 0;
}
int max(int x,int y,int z)
{
    int m;
    if(x>y)
        {if(x>z)
           m=x;
        else m=z;}
    else {if(y>z)
           m=y;
        else m=z;}
        return (m);
}
