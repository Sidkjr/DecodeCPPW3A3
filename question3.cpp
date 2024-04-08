#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int curr_left = 1;
    int curr_right = 1;
    int rows = 1;
    int space_left = n - 1;
    int space_right = n - 1;

    while(rows != n + 1) {
        for(int i=0; i <= space_left; i++) {
            cout << " ";
        }
        space_left = space_left - 1;
        if(rows == 1) {
            cout << "A" << "";
        }   
        else {
            for(int j=curr_left; j != 0; j--) {
                char ch = 'A' + j;
                cout << ch << "";
            }
            curr_left = curr_left + 1;
            cout << "A" << "";
            for(int k=1; k <= curr_right; k++) {
                char ch = 'A' + k;
                cout << ch << "";
            }
            curr_right = curr_right + 1;
        }
        for(int l=0; l <= space_right; l++) {
            cout << " ";
        }
        cout << "\n";
        space_right = space_right - 1;
        rows = rows + 1;
    }
}