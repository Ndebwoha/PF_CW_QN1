#include <iostream>
#include <string>

using namespace std;

int main() {
    string userId, password;
    bool loggedIn = false;
    double balance = 0.0;

    while (true) {
        char choice;
        if (!loggedIn) {
            cout << " Hi! Welcome to MUGARURA'S ATM \n ";
            cout << "Please select an option from the menu below:\n";
            cout << "l -> Login\n" ;
            cout << "c -> Create New Account\n";
            cout << "q -> Quit\n";
            cin >> choice;

            if (choice == 'l') {
                cout << "Please enter your user id: \n";
                cin >> userId;
                cout << "Please enter your password: \n";
                cin >> password;

                if (userId == "12" && password == "2345") {
                    loggedIn = true;
                    cout << "Access Granted" ;
                }
                else {
                    cout << " LOGIN FAILED";
                }
            }
            else if (choice == 'c') {
                string newUserId, newPassword;
                cout << "Please enter your user id:\n ";
                cin >> newUserId;
                cout << "Please enter your password: \n";
                cin >> newPassword;
                cout << "Thank You! Your account has been created";
            }
            else if (choice == 'q') {
                break;
            }
        }
        else {
            cout << "d - Deposit Money \n";
            cout << "w - Withdraw Money \n";
            cout << "r - Request Balance \n";
            cout << "q - Quit \n";
            cin >> choice;

            if (choice == 'd') {
                double depositAmount;
                cout << "Amount of deposit: UGX";
                cin >> depositAmount;
                balance += depositAmount;
            } else if (choice == 'w') {
                double withdrawAmount;
                cout << "Amount of withdrawal: UGX";
                cin >> withdrawAmount;
                if (withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                } else {
                    cout << "Insufficient funds!";
                }
            } else if (choice == 'r') {
                cout << "Your balance is UGX" << balance ;
            } else if (choice == 'q') {
                break;
            }
        }
    }

    cout << "Thank you for using the MUGARURA'S ATM . Goodbye!" ;

    return 0;
}
