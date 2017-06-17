#include"stdio.h"
main ()
{
    char a1,a2;
    printf("请输入一个大写字母：\n");
    a1=getchar();
    a2=a1+32;
    printf("%c\n",a2);
    return 0;
}
