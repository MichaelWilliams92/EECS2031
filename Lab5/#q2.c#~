/*Program 2 for Lab5*/

#include<stdio.h>

void convert(float *pweight, float *pheight){
	
*pweight = *pweight * 2.2046;
*pheight = *pheight * 0.3937;
	
}//convert method

int computeBMI(float w, float h, float *pbmi){

*pbmi = (703 * w) / (h * h);
	
if(*pbmi < 18.5)
	return 1;
else if(18.5 <= *pbmi && *pbmi < 25)
	return 2;
else if(25<= *pbmi && *pbmi < 30)
	return 3;
else
	return 4;
}//computeBMI

void main(){

float kilograms, centimetres, *kilo, *cent, BMI, *pbmi;
int category;
printf("Please enter your weight in kilograms: ");
scanf("%f", &kilograms);
printf("Please enter your height in centimeters: ");
scanf("%f", &centimetres);

kilo = &kilograms;
cent = &centimetres;
pbmi = &BMI;

convert(kilo, cent);
category = computeBMI(kilograms, centimetres, *pbmi)

if(category == 1)
	printf("Your BMI value is %f and you are underweight", BMI);
else if(category == 2)
	printf("Your BMI value is %f and you are normal", BMI);
else if(category == 3)
	printf("Your BMI value is %f and you are overweight", BMI);
else

	





}//main method
