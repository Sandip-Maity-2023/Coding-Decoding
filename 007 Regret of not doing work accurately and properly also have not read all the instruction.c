#include<stdio.h>
int main(){
    int n;char k;
    printf("enter the number from 0 to 100:");
    scanf("%d",&n);
    if(n<=50){
        printf("you are eligible for playing this game and enter any character:\n");
        scanf(" %c",&k);  // you have to give a space before %c to work this!!!!!!!
        if(k=='s' || k=='a' || k=='n' || k=='d' ||k=='i' || k=='p'){
            printf("you have unloked the prize\n");
            printf("you will find treasure");
        }else{
            printf("you have not got ongc schlorship for not appropriate details entered and the schlorship is rejected");
        }
    }else if(n>50 && n<=100){
        printf("you have lost the chance");
    }
    else{
        printf("prepare well for semester exams and it is the last chance okay!");
    }
    return 0;
}
