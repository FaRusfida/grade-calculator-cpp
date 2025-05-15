#include <iostream>
using namespace std;

// Function to calculate grade based on percentage
char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

int main() {
    float marks[5];
    float total = 0.0, average, percentage;

    cout << "Enter marks for 5 subjects (out of 100):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;
    char grade = calculateGrade(percentage);

    cout << "\nTotal Marks: " << total;
    cout << "\nAverage Marks: " << average;
    cout << "\nPercentage: " << percentage << "%";
    cout << "\nGrade: " << grade << endl;

    return 0;
}
