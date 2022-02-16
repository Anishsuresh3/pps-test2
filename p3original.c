#include <stdio.h>
#include <math.h>
typedef struct camel
{
    float radius, height, length, weight;
}Camel;
Camel input()
{
    Camel t;
    printf("Enter the camel height, length and stomach radius:\n");
    scanf("%f%f%f",&t.height,&t.length,&t.radius);
    return t;
}
float find_weight(Camel c)
{
    float weight=0.0,pi=(22/7);
    weight = pi*pow(c.radius,3)*sqrt(c.height*c.length);
    return weight;
}
void output(Camel c)
{
    printf("The details of the camel:\nHeigth=%f\nlength=%f\nstomach radius=%f\nweigth=%f\n",c.height,c.length,c.radius,c.weight);
}
int main()
{
    Camel c=input();
    c.weight=find_weight(c);
    output(c);
    return 0;
}