#include <iostream>
#include <string>
using namespace std;

int main() {
    string password, confirm;
    int valid, special;

    do {
        cout << "Set a password (min 6 chars, at least 1 special character): ";
        cin >> password;

        // Check length
        if (password.length() < 6) {
            cout << "Invalid password. Too short.\n";
            valid = 0;
            continue;
        }

        // Check special character
        special = 0;
        for (int i = 0; i < (int)password.length(); i++) {
            char ch = password[i];
            if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))) {
                special = 1;
                break;
            }
        }

        if (special == 0) {
            cout << "Invalid password. No special character found.\n";
            valid = 0;
        } else {
            valid = 1;
        }

    } while (valid == 0);

    // Confirm password
    do {
        cout << "Confirm your password: ";
        cin >> confirm;

        if (confirm != password) {
            cout << "Passwords do not match. Try again.\n";
        }

    } while (confirm != password);

    cout << "Password set successfully!" << endl;
    return 0;
}
