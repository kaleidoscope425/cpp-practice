#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string reversed = "";

    cout << "Enter a word: ";
    cin >> word;

    for(int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }

    if(word == reversed) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is NOT a palindrome." << endl;
    }

    return 0;
}