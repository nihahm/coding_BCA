#include<stdio.h>
int main(){
    int isclearedPUC=1;   //1 means-cleared;0 means-not
    int isclearinterview=1;
    int ispaidfess=1;

    if(isclearedPUC==1){
        if(isclearinterview==1){
            if(ispaidfess==1){
                printf("you are admitted");
            }else{
                printf("not eligible because fees not cleared");
        }
    else{
            printf("not eligible because you have not cleared interview");
        }
    } 
    else{
        printf("not eligible because you have failed PUC");
    }
}