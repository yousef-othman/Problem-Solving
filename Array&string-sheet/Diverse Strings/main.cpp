#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int len = s.size();
        sort(s.begin(), s.end());
        int i = 0;
        bool diverse = true;
        while (i < len - 1) {
            if (s[i + 1] != s[i] + 1) {
                diverse = false;
                break;
            }
            i++;
        }
        cout << (diverse ? "Yes\n" : "No\n");
    }
    return 0;
}
