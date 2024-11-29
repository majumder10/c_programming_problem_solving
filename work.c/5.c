#include <stdio.h>

int main() {
    int days, years, weeks, rd;

    // Taking input from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculating years, weeks, and remaining days
    years = days / 365;                // 1 year = 365 days
    weeks = (days % 365) / 7;          // Remaining days divided by 7 to get weeks
    rd = (days % 365) % 7;  // Remaining days after dividing by 365 and then by 7

    // Displaying the result
    printf("%d %d %d  %d\n", days, years, weeks, rd);

    return 0;
}
