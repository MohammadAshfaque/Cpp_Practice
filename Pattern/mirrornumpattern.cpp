#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    
    while (i <= n) {
        int Start = 1;
        int j = 1;
        
        while (j <= n - i) {
            cout << " ";
            j++;
        }
        
        while (j <= n) {
            cout << Start;
            Start++;
            j++;
        }
        
        cout << endl;
        i++;
    }
    
    return 0;
}
