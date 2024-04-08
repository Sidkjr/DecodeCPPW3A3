#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int total_chars = (2*n) - 1;
    int top_start = total_chars/2;
    int top_end = total_chars/2;
    int row_count = (2*n) - 1;
    int row_counter = 0;

    while(row_counter != n) {
        for(int i=0; i < total_chars; i++) {
            if(i > top_start && i < top_end) {
                if(i == top_start && i == top_end) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            else {
                cout << "*";
            }
        }
        cout << "\n";
        row_counter += 1;
        top_start -= 1;
        top_end += 1;
    }
    top_start = 1;
    top_end = (n*2) - 3;

    while(row_counter != row_count) {
        for(int i=0; i < total_chars; i++) {
            if(i > top_start && i < top_end) {
                if(i == top_start && i == top_end) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            else {
                cout << "*";
            }
        }
        cout << "\n";
        row_counter += 1;
        top_start += 1;
        top_end -= 1;
    }
}