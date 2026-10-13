#include <stdio.h>

int main()
{
    int x=1;
    int y=1;
    int N=1;
    printf("请输入一个1-9间的数字：");
    scanf("%d",&N);

    for(x=1;x<=N;x++)
    {

        for(y=1;y<=x;y++)
        {
            printf("%d*%d=%d  ",y,x,y*x);
            if(y==x)
            {
                printf("\n");
            }
        }
    }
    return 0;
}