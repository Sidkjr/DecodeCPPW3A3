#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int top_count = 0;
    int m_spaces = 1;
    int l_spaces = n;
    for(int i = 0; i < l_spaces; i++) {
        cout << " ";

    }
    cout << "*";
    cout << "\n";
    top_count += 1;
    l_spaces -= 1;
    for(int i = 0; i < l_spaces; i++) {
        cout << " ";
    }
    for(int i = 0; i < 3; i++) {
        cout << "*";
    }
    top_count += 1;
    cout << "\n";
    l_spaces -= 1;
    while(top_count != n) {
        for(int i = 0; i < l_spaces; i++) {
            cout << " ";
        }
        cout << "*";
        for(int i=0; i < m_spaces; i++) {
            cout << " ";
        }
        cout << "*";
        for(int i=0; i < m_spaces; i++) {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
        top_count += 1;
        m_spaces += 1;
        l_spaces -= 1;
    }
    for(int i = 0; i < (2*n)+1; i++) {
        cout << "*";
    }
    cout << "\n";
    int below_count = n - 2;
    l_spaces += 1;
    while(below_count != 0) {
        for(int i = 0; i < l_spaces; i++) {
            cout << " ";
        }
        cout << "*";
        m_spaces -= 1;
        for(int i = 0; i < m_spaces; i++) {
            cout << " ";
        }
        cout << "*";
        for(int i = 0; i < m_spaces; i++) {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
        below_count -= 1;
        l_spaces += 1;
    }
    for(int i = 0; i < l_spaces; i++) {
        cout << " ";
    }
    for(int i = 0; i < 3; i++) {
        cout << "*";
    }
    cout << "\n";
    l_spaces += 1;
    for(int i = 0; i < l_spaces; i++) {
        cout << " ";
    }
    cout << "*";
    cout << "\n";
}