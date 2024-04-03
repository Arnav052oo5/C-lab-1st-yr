#include <stdio.h>
int is_perfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num) ? 1 : 0;
}
int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (is_perfect(i))
        {
            int *p = &i;
            printf("%d is a perfect number.\n", *p);
        }
    }
    return 0;

}