/* 
    
+--------------------------------+--------------------+-------------------+--------------------------------+
|             Values             | Variable Data Type |   Variable Name   |      Variable Declaration      |
+--------------------------------+--------------------+-------------------+--------------------------------+
| Person's age                   | int                | personAge         | int personAge;                 |
| Person's weight                | float              | personWeight      | float personWeight;            |
| Person's middle initial        | char               | middleInital      | chat middleInitial;            |
| A person's gross annual income | double             | grossAnnualIncome | double grossAnnualIncome;      |
| Cost of an item                | double             | itemCost          | double itemCost;               |
| Temperature                    | float              | temp              | float temp;                    |
| Distance (in miles) to a star  | double             | starDistanceMiles | double starDistanceMiles;      |
+--------------------------------+--------------------+-------------------+--------------------------------+

*/

#include <stdio.h>

int main() {

    // Variable declaration

    int personAge = 20;
    float personWeight = 65.5;
    char middleInitial = 'M';
    double grossAnnualIncome = 50000;
    double itemCost = 5.99;
    float temp = 90.5;
    double starDistanceMiles = 100000.2172398;

    // Printing variables
    printf("Person's age: %d\n", personAge);
    printf("Person's weight: %f\n", personWeight);
    printf("Person's middle initial: %c\n", middleInitial);
    printf("A person's gross annual income: %f\n", grossAnnualIncome);
    printf("Cost of an item: %f\n", itemCost);
    printf("Temperature: %f\n", temp);
    printf("Distance to star: %f miles\n", starDistanceMiles);

    return 0;
}

