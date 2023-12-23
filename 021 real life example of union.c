//
// Created by 12san on 02-12-2023.
#include<stdio.h>
struct user_id{
    char name[30];
    int age;
    union{
        long int voter_id;
        long int adhaar_id;
        long int pan_id;
    }id;
    int option;
};
int main() {
    struct user_id ud;
    printf("enter the name:");
    gets(ud.name);
    printf("enter the age:");
    scanf("%d", &ud.age);
    printf("enter the option of id card 1 for adhaar card,2 for pan card,3 for voter card:");
    scanf("%d", &ud.option);
    switch (ud.option) {
        case 1:
            printf("enter the adhaar card no:");
            scanf("%ld", &ud.id.adhaar_id);
            break;
        case 2:
            printf("enter the pan card no:");
            scanf("%ld", &ud.id.pan_id);
            break;
        case 3:
            printf("enter the voter card no:");
            scanf("%ld", &ud.id.voter_id);
            break;
        default:
            printf("invalid id");
            return 1;
    }
    printf("name:%s\n", ud.name);
    printf("age:%d\n", ud.age);
    printf("id card details:\n ");
    switch(ud.option) {
        case 1:
            printf("adhaar id:%ld\n", ud.id.adhaar_id);
            break;
        case 2:
            printf("pan id:%ld\n", ud.id.pan_id);
            break;
        case 3:
            printf(" id:%ld\n", ud.id.voter_id);
            break;
    }
    return 0;
}

