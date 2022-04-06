#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the points :\n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}

float is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int a,result;
  a=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if(a==0)
  {
    result= 1;
  } 
  else
  {
    result=-1;
  }
  return result; 
}

void output(int result)
{
  if(result==1)
  {
    printf("the points will not form triangle");
  }
  else
  {
    printf("the points will form triangle");
  }
  
}

int main()
{
  float x1,y1,x2,y2,x3,y3,result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(result);
  return 0;
}
