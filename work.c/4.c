#include <stdio.h>

int main() {
    char firstName[50], lastName[50];
    int yearOfBirth;

    // Taking input from the user
    printf("Enter your first name: ");
    scanf("%s", firstName);
    
    printf("Enter your last name: ");
    scanf("%s", lastName);
    
    printf("Enter your year of birth: ");
    scanf("%d", &yearOfBirth);

    // Displaying the information
    printf("%s %s %d\n", firstName, lastName, yearOfBirth);

    return 0;
}
