#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int rows = 1;
    int curr_char = 0;
    int spaces_before = (n-1);
    int spaces_after = (n-1);

    while (rows != n + 1) {
        for(int i=0; i <= spaces_before; i++) {
            cout << " ";
        }
        spaces_before = spaces_before - 1;
        for(int j=0; j <= curr_char; j++) {
            char ch = 'A' + j;
            cout << ch << "";
        }
        curr_char = curr_char + 2;
        for(int k = 0; k <= spaces_after; k++) {
            cout << " ";
        }
        cout << "\n";
        rows = rows + 1;
        spaces_after = spaces_after - 1;
    }
}