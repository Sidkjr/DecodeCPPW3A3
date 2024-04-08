#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int count = 1;
    int l_spaces = n -1;
    for(int i = 0; i < l_spaces; i++) {
        cout << " ";
    }
    cout << count << "";
    count += 1;
    cout << "\n";
    l_spaces -= 1;
    int tabs = 1;
    while(count != n + 1) {
        for(int i = 0; i < l_spaces; i++) {
            cout << " ";
        }
        cout << count;
        for(int i = 0; i < tabs; i++) {
            cout << " ";
        }
        cout << count;
        cout << "\n";
        count += 1;
        tabs += 2;
        l_spaces -= 1;
    }
}