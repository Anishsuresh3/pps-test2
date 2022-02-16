#include<stdio.h>
#include<math.h>
void cord1(int *x1,int *y1)
{
    printf("Enter the 1st coordinates:\n");
    scanf("%d%d",x1,y1);
}
void cord2(int *x2,int *y2)
{
    printf("Enter the 2st coordinates:\n");
    scanf("%d%d",x2,y2);
}
float compute(int x1,int y1,int x2,int y2)
{
    float dis=0.0;
    dis=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return dis;
}
void output(int x1,int y1,int x2,int y2,float r)
{
    printf("the distance between (%d,%d) and (%d,%d) is %f\n",x1,y1,x2,y2,r);
}
int main()
{
    int x1,y1,x2,y2;
    float r;
    cord1(&x1,&y1);
    cord1(&x2,&y2);
    r=compute(x1,y1,x2,y2);
    output(x1,y1,x2,y2,r);
    return 0;
}