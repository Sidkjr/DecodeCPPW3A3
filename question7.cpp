#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the value of m: ";
    cin >> m;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int tabs = 1;
    int l_tab_up = m-1;
    for(int i=0; i < l_tab_up; i++) {
        cout << " ";
    }
    cout << "*";
    cout << "\n";
    l_tab_up -= 1;
    while(l_tab_up != -1) {
        for(int i = 0; i < l_tab_up; i++) {
            cout << " ";
        }
        cout << "*";
        for(int i = 0; i < tabs; i++) {
            cout << " ";
        } 
        cout << "*";
        cout << "\n";
        l_tab_up -= 1;
        tabs += 2;
    }
    l_tab_up += 2;
    tabs -= 2;
    while(l_tab_up != m-1) {
        for(int i = 0; i < l_tab_up; i++) {
            cout << " ";
        }
        cout << "*";
        tabs -= 2;
        for(int i = 0; i < tabs; i++) {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
        l_tab_up += 1;
    }
    for(int i = 0; i < l_tab_up; i++) {
        cout << " ";
    }
    cout << "*\n";
}