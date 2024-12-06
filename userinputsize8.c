#include<stdio.h>
int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<=n-1;i++){
    scanf("%d",&arr[i]);
} 
for(int i=0;i<=n-1;i++){
    printf("%d",arr[i]);
} 
return 0;  
}
// OUTPUT-
// Enter the size of array:4
// 2
// 3
// 4
// 5
// 2345