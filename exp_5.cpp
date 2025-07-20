%This is the code for the experiment no 5 i have implemented all of the sub questions/programs in a switch case for the users ease.

#include <iostream>
using namespace std;

int main() {
 int question;
 cout << "Enter the question number (1-5): ";
    cin >> question;
switch (question) {
    case 1:{
       int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    break;
}

    case 2:{
            int n1,n2,n3,lg;
            cout << "Enter three integers: ";
            cin >> n1;
            cin >> n2;
            cin >> n3;

        if (n1>n2) {
            lg = n1;
        }
        else if(n2>n3){
            lg = n2;
        }
        else if(n3>n1){
            lg = n3;
            
        }
        cout << "the largest integer is : " << lg << endl;
                break;

}
    case 3:{
            string chr;
            cout << "Enter a character: ";
            cin >> chr;
            
            if (chr=="a"||chr=="e"||chr=="i"||chr=="o"||chr=="u"||chr=="A"||chr=="E"||chr=="I"||chr=="O"||chr=="U") {
                cout << chr << " is a vowel.";
                
            }
            else {
                cout << chr << " is a consonant.";
            }
            break;
}

    case 4:{ int num1, num2;
        char op;
    
    
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter operator (+, -, *, /): ";
            cin >> op;

            cout << "Enter second number: ";
            cin >> num2;

            // Operation
            switch (op) {
                case '+':
                    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                    break;
                case '-':
                    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                    break;
                case '*':
                    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                    break;
                case '/':
                    if (num2 == 0) {
                        cout << "Error: Division by zero is undefined." << endl;
                    } else {
                        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                    }
                    break;
                
                default:
                    cout << "Error: Invalid operator '" << op << "'." << endl;
            }
            break;
        }
        case 5:{


            int n;
            char day;

            cout << "Enter weekday (1,2,3,4,5,6,7)\n";
            cin >> n;

            cout << "weekday number selected is "<< n<<"\n";
            

            // Operation
            switch (n) {
                case 1:
                    cout << " The selected day is Monday " <<  endl;
                    break;
                case 2:
                    cout << " The selected day is Tuesday " <<  endl;
                    break;
                case 3:
                    cout << " The selected day is Wednesday " <<  endl;
                    break;
                case 4:
                    cout << " The selected day is Thusday " <<  endl;
                    break;
                case 5:
                    cout << " The selected day is Friday " <<  endl;
                    break;
                case 6:
                    cout << " The selected day is Saturday " <<  endl;
                    break;
                case 7:
                    cout << " The selected day is Sunday " <<  endl;
                    break;
                default:
                    cout << "Error: Invalid weekday number"  << endl;
            }
            break;
        }
        default:
            cout << "Invalid question number. Please enter a number between 1 and 5." << endl;
    }
             return 0;
}









    

