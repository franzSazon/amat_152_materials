#include <stdio.h>
 
int main(){

    // Declare Variables
    int seconds, minutes, hours, days;

    // Collect User Input
    printf("Enter number of seconds: ");
    scanf("%d", &seconds);

    if (seconds >= 60 && seconds < 3600){ //Calculate for minutes
        days = 0;
        hours = 0;
        minutes = seconds / 60;
        seconds = seconds % 60;
    } else if (seconds >= 3600 && seconds < 86400){ //Calculate for hours
        days = 0;
        hours = seconds / 3600;
        minutes = seconds % 3600 / 60;
        seconds = seconds % 3600 % 60;
    } else if(seconds >= 86400){ // Calculate for days
        days = seconds / 86400;
        hours = seconds % 86400 / 3600;
        minutes = seconds % 86400 % 3600 / 60;
        seconds = seconds % 86400 % 3600 % 60;
    }
    
    // Print formatted output as days, hours, minutes, seconds
    printf("%d days, %d hours, %d minutes, %d seconds", days, hours, minutes, seconds);
    

    
    return 0;
}