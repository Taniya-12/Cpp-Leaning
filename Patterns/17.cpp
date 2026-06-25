#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int j = n - i; j >= 1; j--){
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }

        // Print decreasing characters
        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
}

/*

output:
   A
  ABA
 ABCBA
ABCDCBA

*/ 
