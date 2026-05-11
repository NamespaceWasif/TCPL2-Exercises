#include <stdio.h>

int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celcius = lower;

    printf("%10s | %10s\n", "Celcius", "Fahrenheit");
    printf("%23s\n", "-----------------------");
    while (fahr <= upper) {
        fahr = celcius * 9 / 5 + 32;
        printf("%10.0f | %10.1f\n", celcius, fahr);
        celcius += step;
    }
}
