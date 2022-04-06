#include<stdio.h>
int input_number()
{
  int n;
  printf("enter any number :");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int flag=0,i;
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  return flag;
}
void output(int n, int is_prime)
{
  if(is_prime==1)
  {
    printf("%d is not prime number",n);
  }
  else
  {
    printf("%d is prime number",n);
  }
}
int main()
{
  int n,prime;
  n=input_number();
  prime=is_prime(n);
  output(n,prime);
  return 0;
}