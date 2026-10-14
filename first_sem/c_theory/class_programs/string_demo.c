#include<stdio.h>
int main()
{
    //char s[10]="niha";
    char name[100];
    printf("enter your name: ");
    //scanf("%10s",name);
    //printf("%10s",s);
    fgets(name,sizeof(name),stdin);
    printf("hello,%s!",&name);
    return 0;
    
} 