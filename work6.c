#include<stdio.h>
int main()
{
    int n=10,i=1,p=1;
    float r=0.09;
    for(i;i<n;i++)
    {
    p*=(1+r);//这里注意*=的优先级比+低，所以相当于p=p*(1+r).
    }
    printf("p=%f\n",p);
    return 0;
}
