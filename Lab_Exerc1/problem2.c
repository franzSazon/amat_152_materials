#include <stdio.h>
 
int main(){

    int numPerson, stayedNights, totalCost;

    printf("Enter amount of people in the room: ");
    scanf("%d", &numPerson);

    printf("Enter amount of nigths stayed in the room: ");
    scanf("%d", &stayedNights);

    if (numPerson == 1){                                //lmaoo elseif code inefficient affff
        totalCost = 500 * stayedNights;
    } else if(numPerson == 2){
        totalCost = 750 * stayedNights;
    } else{
        totalCost = 1500 * stayedNights;
    }

    printf("Total room cost is: %d\n *To be added with meal cost", totalCost);
    
    return 0;
}