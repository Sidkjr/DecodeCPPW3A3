#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    int remove_counter = 0;
    int rows = 0;
    int count = 0;
    int start_counter = 0;
    while(rows != n) {
        for(int i = 1; i <= n - start_counter; i++) {
            cout << i << "";
        }
        for(int i = 0; i != remove_counter; i++) {
            cout << " ";
        }
        if(rows == 0) {
          for(int i = (n-start_counter-1); i >= 1; i--) {
            cout << i << "";
          }
        }
        else {
          for(int i = (n-start_counter); i >= 1; i--) {
            cout << i << "";
          }
        }
        count += 1;
        if(count == 1) {
            remove_counter += 1;
        }
        else {
            remove_counter += 2;
        }
        rows += 1;
        start_counter += 1; 
        cout << "\n";
    }
}