#include <iostream>

void menu(void) {
    printf("\n");
    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Stop Program\n");
}

void enterNumbers(int *number1, int *number2) {
    printf("Enter first number: ");
    scanf("%d", number1);
    printf("Enter second number: ");
    scanf("%d", number2);
}

int main() {
    int option = 0;
    int number1 = 0;
    int number2 = 0;
    int result = 0;

    do {
        menu();
        printf("choice = \n");
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;
            case 1:
                enterNumbers(&number1, &number2);
                result = number1 + number2;
                printf("%d + %d = %d\n", number1, number2, result);
                break;
            case 2:
                enterNumbers(&number1, &number2);
                result = number1 - number2;
                printf("%d - %d = %d\n", number1, number2, result);
                break;
        }
    } while (option != 3);

    return 0;
}