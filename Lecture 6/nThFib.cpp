#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f = 1, s = 1;
    if (n == 1 || n == 2) {
        cout << 1;
    } else {
        int i = 3;
        int sum = f + s;
        int prev;

        while (i < n) {
            prev = sum;
            sum += s;
            s = prev;
            i++;
        }
        cout << sum;
    }
}
