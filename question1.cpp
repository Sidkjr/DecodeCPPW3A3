#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int rows = 1;
    int curr_num = 1;
    int space_before = (n-1) / 2;
    int space_after = (n-1) / 2;
    
    while(rows != n) {
        for(int i=0; i <= space_before; i++) {
            cout << " " << "";
        }
        space_before = space_before - 1;

        for(int j=1; j <= curr_num; j++) {
            cout << j << "";
        }
        curr_num = curr_num + 2;
        for(int k=0; k <= space_after; k++) {
            cout << " " << ""; 
        }
        cout << "\n";
        space_after = space_after - 1;
        rows = rows + 1;
    }
}