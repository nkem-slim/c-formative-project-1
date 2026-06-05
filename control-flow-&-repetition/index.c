#include <stdio.h>

int main() {
    int choice;
    double number, percent, result, total;
    char continue_choice;

    while (1) {
        printf("\n=== Menu-Driven Percentage Calculator For Any Number ===\n");
        printf("1. Calculate percentage of a number (X of Y)\n");
        printf("2. Exit\n");
        printf("Enter your choice (1-2): ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input! Please enter a number.\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter the percentage value (X): ");
                scanf("%lf", &percent);
                printf("Enter the number (Y): ");
                scanf("%lf", &number);

                result = (percent / 100.0) * number;

                printf("Result: %.2f%% of %.2f is %.2f\n", percent, number, result);
                break;

            case 2:
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please select 1-2.\n");
                continue;
        }

        // Ask if user wants to continue with another calculation (anything else aside n continues the program)
        printf("\nDo you want to perform another calculation? (y/n): ");
        while (getchar() != '\n');
        scanf(" %c", &continue_choice);

        if (continue_choice == 'n' || continue_choice == 'N') {
            printf("Thank you for using the program!\n");
            break;  // Break out of the main while loop
        }
    }

    return 0;
}
