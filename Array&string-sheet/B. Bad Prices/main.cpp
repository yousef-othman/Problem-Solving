#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int& i : arr) cin >> i;
        int sufmn = arr[n-1];
        int ans = 0;
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > sufmn)
                ans++;
            else
                sufmn = arr[i];
        }
        cout << ans << endl;
    }

    return 0;
}
