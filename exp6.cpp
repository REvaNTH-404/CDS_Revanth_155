#include <iostream>
using namespace std;

int main() {
    int question;
    cout << "Enter the question number (1-3, 4, 7, 9-10): ";
    cin >> question;

    switch(question) {
        case 1: {
            // Prints even values between 0 and 9
            for(int i = 0; i < 10; i++)
                if(i % 2 == 0) cout << i << endl;
            break;
        }
        case 2: {
            // Prints "SIT" 5 times
            for(int i = 0; i < 5; i++)
                cout << "SIT" << endl;
            break;
        }
        case 3: {
            // Prints numbers from 1 to 10, but skips 3 and 5
            for(int i = 1; i <= 10; i++) {
                if(i == 3 || i == 5) continue;
                cout << i << endl;
            }
            break;
        }
        case 4: {  // Right-angled triangle star pattern
            int n;
            cout << "Enter n for triangle (case 4): ";
            cin >> n;
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= i; j++)
                    cout << "*";
                cout << "\n";
            }
            break;
        }
        case 7: { // Centered star pyramid
            int rows;
            cout << "Enter rows for pyramid (case 7): ";
            cin >> rows;
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < rows - i - 1; j++)
                    cout << " ";
                for(int j = 0; j < 2 * i + 1; j++)
                    cout << "*";
                cout << "\n";
            }
            break;
        }
        case 9: {
            // Prints numbers from 1 to 20
            for(int i = 1; i <= 20; i++)
                cout << i << endl;
            break;
        }
        case 10: {
            // Password Authenticator
            string CORRECT;
            cout << "SET Password: ";
            cin >> CORRECT;

            string guess;
            int attempts = 0;
            const int MAX = 3;

            while(attempts < MAX) {
                cout << "Enter password: ";
                cin >> guess;
                if(guess == CORRECT) {
                    cout << "Access granted.\n";
                    return 0;
                } else {
                    attempts++;
                    cout << "Incorrect (" << attempts << "/" << MAX << ").\n";
                }
            }
            cout << "Too many failed attempts. Access denied.\n";
            break;
        }
        default:
            cout << "Invalid question number!" << endl;
    }

    return 0;
}
