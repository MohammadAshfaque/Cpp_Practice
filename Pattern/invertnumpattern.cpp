#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = n-i+1;
        int num = j;
        while(j > 0){
            cout << num;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
