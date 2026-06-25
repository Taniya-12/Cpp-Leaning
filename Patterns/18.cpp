#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << char('A' + n - j);
        }
        cout << endl;
    }
}

/*--------------------

output:
E 
E D 
E D C 
E D C B 
E D C B A 

---------------------*/ 