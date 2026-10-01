#include <iostream>
using namespace std;

int main() {

    cout << "\n===== ABASCUS CALCULATOR =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Square\n";
    cout << "6. Cube\n";
    cout << "0. Exit\n";
    cout << "==============================\n";
    
    int choice;
    double a, b;

    do {

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a + b << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a - b << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a * b << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;

        case 5:
            cout << "Enter a number: ";
            cin >> a;
            cout << "Result: " << a * a << endl;
            break;

        case 6:
            cout << "Enter a number: ";
            cin >> a;
            cout << "Result: " << a * a * a << endl;
            break;

        case 0:
            cout << "Exiting calculator...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}