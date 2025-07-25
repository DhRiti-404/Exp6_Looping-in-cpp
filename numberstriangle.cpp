#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int rows = 4;  // Number of rows needed to print numbers up to 10

    for (int i = 1; i <= rows && num <= 10; i++) {
        for (int j = 1; j <= i && num <= 10; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
