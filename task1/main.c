#include <stdio.h>

int main()
{
    double y = 0;
    double a = 0;
    double h = 0.001;
    double dy = 0;
    double x = 0;

    printf("������a��ֵ��");
    scanf("%lf", &a);

    y = a;

    printf("��ʼֵΪ��%lf\n", y);

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

    printf("���ն�̬������ֵ��Ϊ��%lf\n", y);

    return 0;
}

