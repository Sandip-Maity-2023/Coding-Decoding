#include<stdio.h>
int main(){
    struct stu_details{
        char name[15];
        int age;
        long int ph_no;
    };
    struct stu_details sd={"SANDIP MAITY",21,9002838296};
    printf("%s\n",sd.name);
    printf("%d\n",sd.age);
    printf("%ld\n",sd.ph_no);
}
