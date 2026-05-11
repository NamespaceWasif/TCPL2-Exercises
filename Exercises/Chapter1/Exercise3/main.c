#include <stdio.h>

int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%10s | %10s\n", "Fahrenheit", "Celcius");
    printf("%23s\n", "-----------------------");
    while (fahr <= upper) {
        celcius = 5 * (fahr-32) / 9;
        printf("%10.0f | %10.1f\n", fahr, celcius);
        fahr += step;
    }
}
