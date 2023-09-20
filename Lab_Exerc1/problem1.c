#include <stdio.h>
 
int main(){

    int hoursWorked, totalWage, overtimeHours, overtimePay, hourRate;
    
    printf("Enter the hourly rate for the employee: ");
    scanf("%d", &hourRate);

    printf("Input number of hours worked by employee this week: ");
    scanf("%d", &hoursWorked);

    if (hoursWorked > 40){
        overtimeHours = hoursWorked - 40;
        overtimePay = overtimeHours * (hourRate * 1.5);
        totalWage = (40 * hourRate) + overtimePay;
    } else{
        totalWage = hoursWorked * hourRate;
    }

    printf("Total wage is equal to: %d\n", totalWage);

    return 0;
}