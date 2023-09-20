
#include<iostream>
using namespace std;

int main(){

    int base = 50;
    int distanceTraveled, timeTraveled, distanceCost, timeCost, numLuggage, luggageCost, totalCost;   

    cout << "Enter distance traveled (in km): ";
    cin >> distanceTraveled;

    cout << "Enter travel time (in minutes): ";
    cin >> timeTraveled;

    cout << "Enter amount of luggage: ";
    cin >> numLuggage;

    //Do calculations
    distanceCost = distanceTraveled * 10; //input in km 
    timeTraveled = timeTraveled * 20; //input in seconds
    luggageCost = numLuggage * 10; 

    totalCost = distanceCost + timeTraveled + luggageCost + 50;

    //Print total fare
    cout << "The total cost is equal to " << totalCost << " Pesos"; 
    return 0;
}