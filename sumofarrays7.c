#include<stdio.h>
int main(){
 int arr[5]={1,2,3,4,6};
 int sum=0;
 for(int i=0;i<=4;i++){
    sum+=arr[i];
 }  
 printf("sum is %d",sum); 
}
// OUTPUT-
// sum is 16