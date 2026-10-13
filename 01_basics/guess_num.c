#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int count=0;
    int guess=0;
    do
    {
        printf("请猜一个1-100间的数字：");
        scanf("%d",&guess);
        if(guess==number)
        {
            printf("猜对了！\n");
        }
        else if(guess>number)
        {
            printf("大了！\n");
        }
        else if(guess<number)
        {
            printf("小了！\n");
        }
        count++;
    }while(guess!=number);
    printf("共猜了%d次\n",count);
    return 0;
}