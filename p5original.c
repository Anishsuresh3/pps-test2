#include<stdio.h>
int input()
{
    int x;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    return x;
}
float fact(int n)
{
    if(n==0)
      return 1;
    return fact(n-1)*n;
}
float power(int x,int n)
{
    if(n==0)
      return 1;
    return power(x,n-1)*x;
}
float compute(int x)
{
    int i=3,j=1;
    float sum=1.0;
    do
    {
      sum+=power(x,j)/fact(i);
      j++;
      i+=2;
    } while ((power(x,j)/fact(i))>0.000001);
    return sum;
}
void output(float sum)
{
    printf("borga^x series is %f\n",sum);
}
int main()
{
    int n=input();
    float sum=compute(n);
    output(sum);
    return 0;
}