#include<stdio.h>
int main(){
    int marks[10]={95,90,31,25,100,50,15,89,97,30};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("index is %d marks is%d\n",i,marks[i]);
        }
    }
}
// OUTPUT-
// index is 2 marks is31
// index is 3 marks is25
// index is 6 marks is15
// index is 9 marks is30