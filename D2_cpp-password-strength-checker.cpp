#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string password;
    
    cout << "Enter a password: ";
    cin >> password;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;

    for (char c : password) {
        if (isupper(c))
            hasUpper = true;

        if (islower(c))
            hasLower = true;

        if (isdigit(c))
            hasDigit = true;
    }

    int score = 0;

    if (password.length() >= 8)
        score++;

    if (hasUpper)
        score++;

    if (hasLower)
        score++;

    if (hasDigit)
        score++;
    cout << "\nResult: ";
    if (score <= 2)
        cout << "Weak password\n";
    else if (score == 3)
        cout << "Moderate password\n";
    else
        cout << "Strong password\n";

    return 0;
}