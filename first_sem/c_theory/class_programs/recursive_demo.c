#include<stdio.h>
int main(){
    int number;
    printf("enter factorial number:");
    scanf("%d",number);
    if(number==0){
        return 1;
    }

    return number*factorial(number-1);
    
    
}