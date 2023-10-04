/*
    AMAT NOTES 04/10/2023

    switch and if: Choosing one among few or many statements for execution

    // if else ladders can be inneficient at times
    if(expression){
        statement1;
    }else if (expression2){
        statement2;
    }else{
        statement3;
    }

    // better to use switch for cases that returns integers
    switch(expression){
        case value1 ... value6:
            statement1;
            break;
        case value2:
            statement2;
            break;
        case value3:
            statement3;
            break;
        default:
            statement4;
    }

    #Ending the program early
        - On occasion we may want to end the program early

        - A return statement is used to terminate a program of a function
        
        - It is possible to end an entire program of a function with a return statement

        - The entire program of function ends at the point where the return statement is encountered

        - Using this requires that the return type of the function is not void

    #goto statement
        - The goto statement is used to alterd the normal program flow by unconditionally transferring control to another location

        goto label;
        label_name:
        expression;

        ex. 
        void main(){
            goto a;
            b:
            printf("Hello World");
            goto c;
            a:
            printf("Hello Moon");
            printf("Hello World");
            goto b;
            c:
            printf("Programming");
        }

*/

#include <stdio.h>

int main(){

    printf("Helo World\n");

    exit(1);
}

const int ledPins[] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4};
const int knob = A0;

void setup() {
   pinMode(knob, INPUT);

   for (int i = 0; i < 10; i++) {
     pinMode(ledPins[i], OUTPUT);
   }
}

void loop() {
   int knobValue = analogRead(knob);
   int numLeds = map(knobValue, 0, 1023, 0, 10);

   for (int i = 0; i < numLeds; i++) {
        if(i > numLeds) {
        digitalWrite(ledPins[i], HIGH);
        } else {
        digitalWrite(ledPins[i], LOW);
    }
   }
}