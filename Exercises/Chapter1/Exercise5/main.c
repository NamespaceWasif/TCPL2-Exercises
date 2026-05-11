#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

int main() {
    float fahr;

    printf("%10s | %10s\n", "Fahrenheit", "Celcius");
    printf("%23s\n", "-----------------------");

    for (fahr = UPPER; fahr > LOWER - STEP; fahr -= STEP)
        printf("%10.0f | %10.1f\n", fahr, (5.0f/9.0f) * (fahr - 32.0f));
}
