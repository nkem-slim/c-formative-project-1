#include <stdio.h>

// Function prototypes
void displayMenu();
int getChoice();
int recursivePower(int base, int exp);
void showRecursionExplanation();

int main() {
    int choice;
    double percent, number, result;
    char continue_choice;

    printf("=== Recursive Percentage Calculator For Any Number ===\n");

    while (1) {
        displayMenu();
        choice = getChoice();

        switch (choice) {
            case 1:
                printf("Exiting program. Goodbye!\n");
                return 0;

            case 2:
                // Demonstrate recursion
                int base, exp;
                printf("Enter base number: ");
                scanf("%d", &base);
                printf("Enter exponent: ");
                scanf("%d", &exp);
                printf("%d^%d = %d\n", base, exp, recursivePower(base, exp));
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        while (getchar() != '\n');
        scanf(" %c", &continue_choice);

        if (continue_choice == 'n' || continue_choice == 'N') {
            printf("Thank you for using the program!\n");
            break;
        }
    }
    return 0;
}

// Display menu
void displayMenu() {
    printf("\n=== Menu ===\n");
    printf("1. Exit\n");
    printf("2. Demonstrate Recursion (Power)\n");
    printf("Enter your choice (1-2): ");
}

// Get validated choice
int getChoice() {
    int choice;
    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        return -1;  // Invalid
    }
    return choice;
}

int recursivePower(int base, int exp) {
    if (exp == 0) 
        return 1;
    if (exp < 0) 
        return 0;
    return base * recursivePower(base, exp - 1);
}

// Explanation of recursion
void showRecursionExplanation() {
    printf("\n=== Advantages and Limitations of Recursion ===\n");
    printf("Advantages:\n");
    printf("- Code is clean and elegant\n");
    printf("- Easy to understand mathematical problems\n\n");
    printf("Limitations:\n");
    printf("- Uses more memory (call stack)\n");
    printf("- Risk of stack overflow\n");
    printf("- Slower than normal loops\n");
}
