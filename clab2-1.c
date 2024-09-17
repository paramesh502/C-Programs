// Question 1
#include <stdio.h>
int main() {
    // assume 28 days in month
    int hoursperweek, rateperhour, weeksinmonth = 4, monthlypay;

    // No. of hours worked in a week
    printf("Enter the number of hours worked per week: ");
    scanf("%d", &hoursperweek);

    // Rate per hour
    printf("Enter the rate per hour: ");
    scanf("%d", &rateperhour);

    // Calculate monthly pay
    monthlypay = hoursperweek * rateperhour * weeksinmonth;

    // Output: Monthly Pay
    printf("The monthly pay is: %d\n", monthlypay);

    return 0;
}

