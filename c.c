#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    int num1;
    printf("Введите первое число\n");
        scanf("%ds",num);
    printf("Введите второе число\n");
        scanf("%d",num1);
    if (num>num1)
    printf("%d больше %d",num, num1);
    else
        printf("%d меньше %d",num, num1);
}
