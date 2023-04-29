#include <stdio.h>

int main()
{
    double y = 0;
    double a = 0;
    double h = 0.001;
    double dy = 0;
    double x = 0;

    printf("请输入a的值：");
    scanf("%lf", &a);

    y = a;

    printf("初始值为：%lf\n", y);

    while (1)
    {
        dy = (-y * h);
        y += dy;
        x += h ;

        printf("x = %lf , y = %lf\n ", x , y);

        if (dy<=0.000001 && dy>=-0.000001)
        {
            break;
        }
    }

    printf("最终定态（收敛值）为：%lf\n", y);

    return 0;
}

