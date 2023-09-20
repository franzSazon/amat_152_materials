#include<iostream>
using namespace std;

int main(){
    int hoursWorked, totalWage, overtimeHours, overtimePay, hourRate;

    cout << "Enter the hourly rate for the employee: ";
    cin >> hourRate;

    cout << "Input number of hours worked by employee this week: ";
    cin >> hoursWorked;

    if (hoursWorked > 40){
        overtimeHours = hoursWorked - 40;
        overtimePay = overtimeHours * (hourRate * 1.5);
        totalWage = (40 * hourRate) + overtimePay;
    } else{
        totalWage = hoursWorked * hourRate;
    }

    cout << "Total wage is equal to: " << totalWage;

    return 0;
}