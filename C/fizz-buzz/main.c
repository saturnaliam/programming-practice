#include <stdio.h>
#include <string.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        char c[sizeof(i) * 8] = {};

        if (i % 3 == 0) strcat(c, "Fizz");
        if (i % 5 == 0) strcat(c, "Buzz");
        if (c[0] == 0) { 
            snprintf(c, sizeof(c), "%d", i);
        }

        printf("%s\n", c);
    }

    return 0;
}