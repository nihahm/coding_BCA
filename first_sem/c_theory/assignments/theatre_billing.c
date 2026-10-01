#include<stdio.h>
int main(){
    int category,n;
    int regular=0;
    int premium=0;
    int recliner=0;
    int total=0;
    printf("enter number of tickets:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("enter category for ticket(1/2/3):");
        scanf("%d",&category);
        if (category==1){
        total=total+150;
        regular++;
        }
        if (category==2){
        total=total+250;
        premium++;
        }
        if (category==3){
        total=total+400;
        recliner++;
        }
        }
    printf("----FINAL BILL----\n");
    printf("regular tickets:%d\n",regular);
    printf("premium tickets:%d\n",premium);
    printf("recliner tickets:%d\n",recliner);
    printf("total(before discount):%d\n",total);
    if(n>=5)
    {
       total=total-(total*10/100);
       printf("discount applied:yes\n");
    }
    else{
        printf("discount applied:no\n");
    }  
    printf("final amount:%d",total);
    return 0;
}