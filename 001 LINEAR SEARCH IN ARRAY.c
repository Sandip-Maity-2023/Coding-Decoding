#include<stdio.h>
int main(){
    int arr[4]={10,20,30,40};
    int element,count =0;
    printf("ENTER THE ELEMENT TO BE SELECTED:\n");
    scanf("%d",&element);
    for(int i=0;i<4;i++){
        if(arr[i]==element){
            printf("ELEMENT FOUND IN INDEX:%d",i);
            count++;
            break;
        }
    }
    if(count==0){
        printf("ELEMENT NOT FOUND\n");
    }
}
