#include<stdio.h>
int main()
{
    int n=10,i=1,p=1;
    float r=0.09;
    for(i;i<n;i++)
    {
    p*=(1+r);//����ע��*=�����ȼ���+�ͣ������൱��p=p*(1+r).
    }
    printf("p=%f\n",p);
    return 0;
}
