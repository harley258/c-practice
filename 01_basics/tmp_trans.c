#include <stdio.h>

int main(void)
{
    int choice;
    double celsius, fahrenheit;

    while (1) {
        printf("\n===== 温度转换 =====\n");
        printf("1. 摄氏度 -> 华氏度\n");
        printf("2. 华氏度 -> 摄氏度\n");
        printf("0. 退出\n");
        printf("请选择: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("请输入摄氏度: ");
            scanf("%lf", &celsius);
            fahrenheit = celsius * 9.0 / 5.0 + 32.0;
            printf("%.2f C = %.2f F\n", celsius, fahrenheit);
        } else if (choice == 2) {
            printf("请输入华氏度: ");
            scanf("%lf", &fahrenheit);
            celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
            printf("%.2f F = %.2f C\n", fahrenheit, celsius);
        } else if (choice == 0) {
            printf("已退出\n");
            break;
        } else {
            printf("无效选项，请重新输入\n");
        }
    }
    return 0;
}