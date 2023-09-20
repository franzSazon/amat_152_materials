#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

    int inputNumber;
    int resultNumber = 1;

    cout << "Input Number" << endl;

    cin >> inputNumber;

    if(inputNumber < 0){
        cout << "Number must be non negative";

        return 0;
    }

    for(int i = inputNumber; i > 0; i--){
        resultNumber = resultNumber * inputNumber;
        inputNumber--;
    }

    cout << resultNumber << endl;

    cout << "Press anykey to exit.";
    cin.ignore();
    cin.get();

    return 0;
}