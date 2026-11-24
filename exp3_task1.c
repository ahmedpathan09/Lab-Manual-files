#include <stdio.h>

int main() {
    int choice;
    float marks;

    menu:
    printf("\n--- Student Grade & Result System ---\n");
    printf("1. Check Grade\n2. Exit\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter marks (out of 100): ");
            scanf("%f", &marks);

            if (marks < 0 || marks > 100)
                printf("Invalid marks!\n");
            else if (marks >= 75)
                printf("Result: Distinction (Grade A)\n");
            else if (marks >= 60)
                printf("Result: First Class (Grade B)\n");
            else if (marks >= 50)
                printf("Result: Second Class (Grade C)\n");
            else if (marks >= 40)
                printf("Result: Pass (Grade D)\n");
            else
                printf("Result: Fail\n");
            
            goto menu;

        case 2:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice!\n");
            goto menu;
    }

    return 0;
}
