#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int total_chars = (n * 2) - 1;
    int total_alpha = 64 + total_chars;
    int rows = 1;
    int char_to_remove_start = total_chars / 2;
    int char_to_remove_end = total_chars / 2;
    int char_to_remove_start_alpha = 65 + char_to_remove_start;
    int char_to_remove_end_alpha = 65 + char_to_remove_end;

    for(int i = 65; i <= total_alpha; i++) {
        cout << (char)i << "";
    }

    cout << "\n";

    while(rows != n) {
        for(int i = 65; i <= total_alpha; i++) {
            if(i >= char_to_remove_start_alpha && i <= char_to_remove_end_alpha) {
                cout << " ";
                continue;
            }
            cout << (char)i << "";
            
        }
        char_to_remove_end_alpha += 1;
        char_to_remove_start_alpha -= 1;
        rows += 1;
        cout << "\n";
    }

}