#include <stdio.h>

long long fact(int n)
{
    if (n <= 1 ) 
    {
        return 1 ;
    } 
    return (long long)n * fact(n - 1 );
}

int sum(int n)
{
    int x=0;
    for(int i=1;i<=n;i++)
    {
        x+=i;
    }
    return x;
}

int main()
{
    int n=0;
    int a=0;
    printf("-------选择菜单-------\n");
    printf("---输入1计算1~n相加---\n");
    printf("---输入2计算n!---\n");
    printf("请选择功能：");
    scanf("%d",&a);
    printf("请输入数字：");
    scanf("%d",&n);
    if(a==1)
    {
        int x=sum(n);
        printf("1+...+%d=%d\n",n,x);
    }
    else if(a==2)
    {
        long long y=fact(n);
        printf("%d!=%lld\n",n,y);
    }
    return 0;
}