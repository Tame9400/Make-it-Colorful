#include <iostream>
#include <windows.h>
using namespace std;

void setConsoleColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void rollDice(int roll) {
    if (roll == 1) {
        setConsoleColor(4);
        cout << "Critical Failure!" << endl;
    }
    else if (roll == 20) {
        setConsoleColor(2);
        cout << "Critical Success!" << endl;
    }
    else {
        setConsoleColor(7);
        cout << "You rolled a " << roll << endl;
    }
}

int main() {
    int roll;
    cout << "Enter your dice roll result: ";
    cin >> roll;
    rollDice(roll);
    setConsoleColor(7);
    return 0;
}