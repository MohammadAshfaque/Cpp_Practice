#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    int num = n;
    while (i <= n) {
        int j = 1;
        int start = 'A' + num - 1;
        while (j <= i) {
            cout << (char)start;
            j++;
            start++;
        }
        cout << endl;
        num--;
        i++;
    }
    return 0;
}
