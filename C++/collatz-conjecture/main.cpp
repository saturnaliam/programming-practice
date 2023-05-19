#include <iostream>
#include <string>

int main() {

    start:
        int input, steps = 0;

        system("cls");
        printf("Please give a number: ");
        scanf("%s", &input);

        while (input != 1) {
            if (input % 2 == 0) {
                input /= 2;
            } else {
                input = (input * 3) + 1;
            }
            steps++;
        }

        printf("It takes %d steps to reach 1!\n", steps);
        system("pause");
        goto start;

}