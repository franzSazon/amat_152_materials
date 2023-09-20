#include <stdio.h>
 
int main(){

    int base = 50;
    int distanceTraveled, timeTraveled, distanceCost, timeCost, numLuggage, luggageCost, totalCost;

    printf("Enter distance traveled (in km): ");
    scanf("%d", &distanceTraveled);

    printf("Enter travel time (in minutes): ");
    scanf("%d", &timeTraveled);

    printf("Enter amount of luggage: ");
    scanf("%d", &numLuggage);

    //Do calculations
    distanceCost = distanceTraveled * 10; //input in km 
    timeTraveled = timeTraveled * 20; //input in seconds
    luggageCost = numLuggage * 10; 

    totalCost = distanceCost + timeTraveled + luggageCost + 50;

    //Print total fare
    printf("The total cost is equal to %d Pesos", totalCost);
    
    return 0;
}