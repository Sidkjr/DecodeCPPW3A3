#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value for n: ";
    cin >> n;
    cout << "\n";

    int tab_left = 0;
    int tabs = (n*2) - 2;

    while(tabs >= 2) {
        for(int i = 0; i < tab_left; i++) {
            cout << "\t" << "";
        }
        cout << "*";
        for(int i = 0; i < tabs; i++) {
            cout << "\t" << "";
        }
        cout << "*";
        cout << "\n";
        tab_left += 1;
        tabs -= 2;
    }
    for(int i=0; i < tab_left; i++) {
        cout << "\t" << "";
    }
    cout << "*";
    cout << "\n";
}