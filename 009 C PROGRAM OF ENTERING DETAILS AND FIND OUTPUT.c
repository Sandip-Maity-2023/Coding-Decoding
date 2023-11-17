#include<stdio.h>
int main(){
    struct stu_details{
        char name[15];
        int age;
        long int ph_no;
    };
    struct stu_details sd;
    printf("ENTER THE NAME:\n");
    gets(sd.name);
    printf("ENTER THE AGE:\n");
    scanf("%d",&sd.age);
    printf("ENTER THE PHONE NUMBER:\n");
    scanf("%ld",&sd.ph_no);
    printf("NAME:");
    puts(sd.name);
    printf("AGE:%d\n",sd.age);
    printf("PHONE NO:%ld\n",sd.ph_no);
}
