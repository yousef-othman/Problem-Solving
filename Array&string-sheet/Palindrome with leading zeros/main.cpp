#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    if (n == 0)
        return cout << "Yes\n", 0;
    while (n % 10 == 0) n /= 10;
    int tmp = n;
    long long tst = 0;
    while (n) {
        int dgt = n % 10;
        tst *= 10;
        tst += dgt;
        n /= 10;
    }
    cout << (tmp == tst ? "Yes\n" : "No\n");
    return 0;
}
