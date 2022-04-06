#include <stdio.h>
int input()
{
    int num;
    printf("Enter n: ");
    scanf("%d", &num);
    return num;
}
int find_fibo(int n)
{
    int num1 = 0,num2 = 1,temp;
    if(n==0)
    return 0;
    else
    for (int i = 2; i <= n; i++)
    {
        temp = num1+num2;
        num1 = num2;
        num2 = temp;
    }
    return num2;
}
void output(int n, int fibo)
{
    printf("Fibo(%d) is %d\n", n, fibo);
}
int main()
{
    int num = input();
    int res = find_fibo(num);
    output(num, res);
    return 0;
}