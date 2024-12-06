#include<stdio.h>
int main(){
int arr[5];
for(int i=0;i<=4;i++){ 
    printf("Enter the %d number",i);
scanf("%d",&arr[i]);   
}
for(int i=0;i<=4;i++){
    printf("%d ,",arr[i]);
}
}
// OUTPUT-
// Enter the 0 number2
// Enter the 1 number3
// Enter the 2 number4
// Enter the 3 number5
// Enter the 4 number6
// 2 ,3 ,4 ,5 ,6 ,