#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int sumev=0;
    int sumod=0;
    
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumev +=arr[i];
        }
        else{
            sumod +=arr[i];
        }
    }
    int c=sumev-sumod;
    printf("The diffrenence betwn even and odd indices element is %d",c);
    return 0;
}
// OUTPUT-
// The diffrenence betwn even and odd indices element is 4