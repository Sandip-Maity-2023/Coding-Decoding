#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]="programming";
    char str2[]="in c";
    strncat(str1,str2,2);
    printf("\n str1:%s",str1);
    return 0;
} 
