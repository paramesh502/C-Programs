//Que 5
#include <stdio.h>

int main() {
    float distance, time, speed;
//distance and time
    printf("Enter the distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Enter the time taken in hours: ");
    scanf("%f", &time);

    // formula
    speed = distance / time;

    //result
    printf("The speed is %.2f km/h\n", speed);

    return 0;
}
