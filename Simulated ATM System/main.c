#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 1000.0;  // initial balance
    float amount;

    // --- Login Section ---
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Incorrect PIN. Access Denied.\n");
        return 0;
    }

    printf("\nLogin successful!\n");

    // --- Main Menu Loop ---
    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! New balance: $%.2f\n", balance);
                } else {
                    printf("Invalid amount. Try again.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount. Try again.\n");
                } else if (amount > balance) {
                    printf("Insufficient funds! Withdrawal denied.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: $%.2f\n", balance);
                }
                break;

            case 4:
                printf("Exiting... Thank you for using our ATM!\n");
                break;

            default:
                printf("Invalid option. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
