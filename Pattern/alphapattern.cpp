#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= n) {
        // cout << i << " ";
        int j = 1;
        while(j <= i) {
            cout << (char)('A' + i - 1);
            j += 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
