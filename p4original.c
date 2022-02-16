#include<stdio.h>
typedef struct camel
{
    float radius, height, length;
}Camel;
Camel input()
{
    Camel t;
    printf("Enter the camel height, length and stomach radius:\n");
    scanf("%f%f%f",&t.height,&t.length,&t.radius);
    return t;
}
int check(Camel c)
{
    if(c.radius<c.height && c.radius<c.length)
       return 1;
    else if(c.height<c.length)
       return -1;
    else 
       return 0;
}
void output(int x)
{
    if(x==1)
      printf("The Camel is Sick\n");
    else if(x==-1)
      printf("The Camel is Happy\n");
    else 
      printf("The Camel is Tense\n");
}
int main()
{
    Camel c=input();
    int x=check(c);
    output(x);
    return 0;
}