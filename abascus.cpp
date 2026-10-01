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

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Result: " << a + b << endl;
        break;

    case 2:
        cout << "Subtraction selected\n";
        break;

    case 3:
        cout << "Multiplication selected\n";
        break;

    case 4:
        cout << "Division selected\n";
        break;

    case 5:
        cout << "Square selected\n";
        break;

    case 6:
        cout << "Cube selected\n";
        break;

    case 0:
        cout << "Exiting calculator...\n";
        break;

    default:
        cout << "Invalid choice.\n";
    }

    return 0;
}