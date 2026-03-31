#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    int numberSecret = rand()%100 + 1;

    int attempt;
    int attempts = 1;

    cout<<"Please try to guess the number (1-100): ";
    cin>>attempt;

    while(attempt != numberSecret){

        if(attempt > numberSecret){
            cout<<"Very high\n";
        }
        else if(attempt < numberSecret){
            cout<<"Very low\n";
        }

        cout<<"Try again: ";
        cin>>attempt;
        attempts++;
    }

    cout<<"Correct! You guessed the number\n";
    cout<<"Attempts: "<<attempts<<"\n";

    return 0;
}