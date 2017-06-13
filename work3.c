#include"stdio.h"
int main()
{
    double pow(double x,double y);
    double i=1.0;
    double s=1.0,a=1.0,sum;
    if(i<100)
    {
        a=pow(-1,i)*(a+1)/a;
        s=s+a;
        i=i+1;
    }
    else sum=s;
    printf("sum=%d\n",sum);
    return 0;
}
double pow(double x,double y)
{double m=1.0,z;
if(m<=y)
{
    z=z*x;
    m=m+1;
}
else return (z);
}
