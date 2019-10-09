#include <iostream>
using namespace std;

void countFunction();
void countDown();
void calcFunctionAdd();
void calcFunctionSub();
void calcFunctionMul();
void calcFunctionDiv();

int num1, num2;

int main(){

    //input variable.

    int input;

    // Menu for Calculator 

    cout << "Welcome to my Calculator program." << endl << endl;
    cout << "Main menu:" << endl << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    cin >> input;

    if(!input){
        int input;
        cout << "You must use numbers for input. " << endl;
    } else{
        if(input == 1){
            cout << "You're in addition" << endl;
            calcFunctionAdd();
        } else if (input == 2){
            cout << "you're in subtraction" << endl;
            calcFunctionSub();
        } else if (input == 3){
            cout << "You're in multiplication" << endl;
            calcFunctionMul();
        } else if (input == 4){
            cout << "You're in division" << endl;
            calcFunctionDiv();
        } else if(input == 5 ){
            cout << "Exiting program..." << endl;
            return 0;
        }
    }

    return 0;
}

void calcFunctionAdd(){

    int num1, num2, answer;

    cout << "Give me two numbers and i will add them." << endl;

    cin >> num1; 
    cin >> num2;

    answer = num1 + num2;

    cout << "The total is " << answer << endl;

}

void calcFunctionSub(){
    int num1, num2, answer;

    cout << "Give me two numbers and i will subtract them." << endl;

    cin >> num1;
    cin >> num2;

    answer = num1 - num2;

    cout << "The number is " << answer << endl;

}

void calcFunctionMul(){

    int num1, num2, answer;

    cout << "Give me two numbers and i will multiply them." << endl;

    cin >> num1; 
    cin >> num2;

    answer = num1 * num2;

    cout << "The total is " << answer << endl;

}

void calcFunctionDiv(){

    int num1, num2, answer;

    cout << "Give me two numbers and i will divide them. :)" << endl;

    cin >> num1; 
    cin >> num2;

    answer = num1 / num2;

    cout << "The total is " << answer << endl;

}

void countFunction(){

    for(int i = 1 ; i<=10; i++){
    cout << i << endl;
    }
} 

void countDown(){
    for(int i=10; i >= 1; i--){
        cout << i << endl;
    }
}