#include <stdio.h>
int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    switch (x > 0) {
    case 1:  // x is positive
        switch (x % 2 == 0) {
            case 1:
                printf("positive even\n");
                break;
            case 0:
                printf("positive odd\n");
                break;
        }
        break;
    case 0:  // x is zero or negative
        switch (x < 0) {
            case 1:  // x is negative
                switch (x % 2 == 0) {
                    case 1:
                        printf("negative even\n");
                        break;
                    case 0:
                        printf("negative odd\n");
                        break;
                }
                break;

            case 0:  // x is zero
                printf("zero\n");
                break;
        }
        break;
    }

    return 0;
}
