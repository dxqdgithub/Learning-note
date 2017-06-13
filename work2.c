#include"stdio.h"
int main()
{
    int max(int x,int y,int z);
    int a,b,c,d;
    printf("请输入a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    d=max(a,b,c);
    printf("最大值为%d\n",d);
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
