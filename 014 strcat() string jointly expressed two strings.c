#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]="programming";
    char str2[15]=" in c";
    strcat(str1,str2);
    printf("\n jointly expressed two strings str1:%s",str1);
    return 0;
}
