#include<iostream>
using namespace std;

int main(){

    int numPerson, stayedNights, totalCost;

    cout << "Enter amount of people in the room: ";
    cin >> numPerson;

    cout << "Enter amount of nigths stayed in the room: ";
    cin >> stayedNights;

    if (numPerson == 1){                                //lmaoo elseif code inefficient affff
        totalCost = 500 * stayedNights;
    } else if(numPerson == 2){
        totalCost = 750 * stayedNights;
    } else{
        totalCost = 1500 * stayedNights;
    }

    cout << "Total room cost is: " << totalCost << endl << "*To be added with meal cost"; 

    return 0;
}