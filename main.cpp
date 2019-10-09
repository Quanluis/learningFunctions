#include <iostream>
using namespace std;

void countFunction();
void countDown();

int main(){

    countFunction();
    cout << endl;
    countDown();
    

    return 0;
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