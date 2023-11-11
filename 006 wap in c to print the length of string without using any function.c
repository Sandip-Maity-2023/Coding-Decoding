// method 2 of 005 program by prabhat sir.
#include<stdio.h>
int main() {
    char name[] = "HELLO";
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (name[i] == '\0') {
            break;
        } else {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
