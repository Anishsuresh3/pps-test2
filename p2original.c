#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the camel height, length and stomach radius:\n");
    scanf("%f%f%f",height,length,radius);
}
float find_weight(float radius, float height, float length)
{
    float weight=0.0,pi=(22/7);
    weight = pi*pow(radius,3)*sqrt(height*length);
    return weight;
}
void output(float radius, float height, float length, float weight)
{
    printf("The details of the camel:\nHeigth=%f\nlength=%f\nstomach radius=%f\nweigth=%f\n",height,length,radius,weight);
}
int main()
{
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight=find_weight(radius,height,length);
    output(radius,height,length,weight);
    return 0;
}