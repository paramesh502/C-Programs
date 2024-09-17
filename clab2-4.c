//Que 4
#include <stdio.h>

int main() {
    int inputSeconds, hours, minutes, seconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &inputSeconds);

    // Calculate the hours, minutes, and seconds
    hours = inputSeconds / 3600;
    minutes = (inputSeconds % 3600) / 60;
    seconds = inputSeconds % 60;

    // result
    printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds\n", inputSeconds, hours, minutes, seconds);

    return 0;
}


