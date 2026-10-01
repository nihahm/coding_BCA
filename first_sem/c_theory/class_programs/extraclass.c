#include<stdio.h> //header file defined to perform input and output operation
int main(){
    int firstnumber,sum;  //declared a variable 'firstnumber' of 'integers' type.
    int secondnumber;
    firstnumber=100; //value 100 is stored in 'firstnumber'
    secondnumber=200; //variable initialization 
    sum=firstnumber+secondnumber; //addition
    printf("the sum is:%d",sum);

    float first,second;
    float difference;
    printf("enter the first number:");
    scanf("%f",&first);  //read a float type data from KB and stores it in 'first'
    printf("enter the second number:");
    scanf("%d",&second);
    difference=first-second;
    printf("the difference is %f",difference);


  
}