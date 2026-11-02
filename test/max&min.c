#include <stdio.h>

int main(void)
{
    int n;
    int max, min;
    printf("请输入一共有几个数字：");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("数字个数不能小于等于0！\n");
        return 0;
    }

    printf("请输入第1个数：");
    scanf("%d", &max);
    min = max; // 第一个数既是最大值也是最小值

    for (int i = 2; i <= n; i++)
    {
        int num;
        printf("请输入第%d个数：", i);
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }

    printf("最大值：%d\n", max);
    printf("最小值：%d\n", min);
    return 0;
}