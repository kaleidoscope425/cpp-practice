#include <iostream>
using namespace std;

int main() {

    float grades[5];      // array to store grades
    float sum = 0;        // total sum of grades
    float average;
    int passed = 0;       // counter for passed grades
    int failed = 0;       // counter for failed grades
    int i;

    // Input grades with validation
    for(i = 0; i < 5; i++){
        float grade;
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;

        // Validate: grade must be between 0 and 5
        if(grade < 0 || grade > 5){
            cout << "Invalid grade. Please enter a value between 0 and 5." << endl;
            i--; // repeat this iteration
            continue;
        }

        grades[i] = grade; // store valid grade
    }

    // Analyze grades
    for(i = 0; i < 5; i++){
        sum += grades[i];

        if(grades[i] >= 3){
            passed++;
        } else {
            failed++;
        }
    }

    // Calculate average
    average = sum / 5;

    // Display results
    cout << "The average grade is: " << average << endl;
    cout << "Number of passed grades: " << passed << endl;
    cout << "Number of failed grades: " << failed << endl;

    return 0;
}