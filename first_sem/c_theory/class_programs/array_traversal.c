#include<stdio.h>
int main()
{
   int isvalid=1; 
   int arraysize=0;
   int my_array[];
   int arraysize=read_array_size();  //calling method and stores return value
   int isvalid=validate_array_size(arraysize);  //passing 'aaraysize'; int array_size=arraysize
   while (isvalid==1)
   {
    int arraysize=read_array_size();
    int isvalid=validate_array_size(arraysize);
    if(isvalid==1){

        break;
    }
    printf("array size is not valid.please try again");
   }
   int myarray[arraysize];
   for(int i=0;i<=arraysize;i++){

   }

}
int read_array_size(){
    int size;  //local variable
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;
}
int validate_array_size(int array_size){
    if(array_size>4){
        return 1;
    }
    return 0;
}
int get_array_sum(){
    int sum;
    printf("the sum of array element is:");
    scanf("%d",&sum);
    return sum;
}

