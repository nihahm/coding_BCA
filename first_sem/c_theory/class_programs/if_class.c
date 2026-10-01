#include<stdio.h>
int main(){
    int mynumber;
    int checknumber=100;
    printf("enter any integer number:"); //prints at terminal
    scanf("%d",&mynumber);   //reads an integer from keyboard and stores it in 'mynumber'
    if(mynumber>checknumber){
        //if block executes whenever condition returns true
        //output string:500 is greater than 100
        printf("%d is greater than %d",mynumber,checknumber);
    }
    else{
        printf("%d is smaller than %d",mynumber,checknumber);
    }

}