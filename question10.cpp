#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value for n: ";
    cin >> n;
    int top_count = 0;
    int bottom_count = n;
    int total_chars = (n*2) - 1;
    int top_start = 1;
    int top_end = n+1;
    int bottom_start = total_chars/2;
    int bottom_end = total_chars/2;
    while(top_count < n) {
        for(int i = 0; i < total_chars; i++) {
            if(i >= top_start && i <= top_end) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        top_count += 1;
        top_start += 1;
        top_end -= 1; 
        cout << "\n";
    }
    for(int i = 0; i < total_chars; i++) {
        cout << "*";
    }
    cout << "\n";
    while(bottom_count != -1) {
        for(int i = 0; i < total_chars; i++) {
            if(i >= bottom_start && i <= bottom_end) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << "\n";
        bottom_start -= 1;
        bottom_end += 1;
        bottom_count -= 1;
    }
}