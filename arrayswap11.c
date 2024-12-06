#include<stdio.h>
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return ;
}
//array is pass by reference
int main(){
    int arr[2]={21,9};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}
// OUTPUT-
// 21 9
// 9 21