#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float height, weight,b;
	printf("請輸入(身高(cm)、體重(kg)):");
	scanf("%f %f",&height,&weight);
	height = height * 0.01;
	b = weight/(height*height);
	printf("BMI VAIUES:%f\n",b);
	printf("Underweight:less than 18.5\n");
	printf("Normal:     between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese:      30 or greater");
}