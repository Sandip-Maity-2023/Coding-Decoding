#include<stdio.h>
#define d(x) (x*x*x)
int main(){
    int a=5;                //(a-1)+1*(a-1)+1*(a-1)+1=(5-1)+1*(5-1)+1*(5-1)+1=4+1*4+1*4+1=4+4+4+1=13
    int b=d((a-1)+1);
    printf("%d",b);
}
