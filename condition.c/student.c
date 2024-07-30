#include <stdio.h>
#include <string.h>

int main() {
    char ch[20];
    printf("Enter the value of ch: ");
    scanf("%s", ch);

    if (strcmp(ch, "one") == 0) {
        printf("20 students\n");
    } else if (strcmp(ch, "two") == 0) {
        printf("30 students\n");
    } else if (strcmp(ch, "three") == 0) {
        printf("26 students\n");
    } else if (strcmp(ch, "four") == 0) {
        printf("40 students\n");
    } else if (strcmp(ch, "five") == 0) {
        printf("50 students\n");
    } else {
        printf("School is closed\n");
    }

    return 0;
}
