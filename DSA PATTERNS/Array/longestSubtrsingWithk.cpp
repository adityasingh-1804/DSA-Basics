
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
    string s;
    int k;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter k: ";
    cin >> k;
    int low = 0;
    int res = -1;
    int n = s.size();
    unordered_map<char, int> f;
    for (int high = 0; high < n; high++) {
        f[s[high]]++;
        while (f.size() > k) {
            f[s[low]]--;
            if (f[s[low]] == 0) {
                f.erase(s[low]);
            }
            low++;
        }
        if (f.size() == k) {
            int len = high - low + 1;
            res = max(res, len);
        }
    }
    cout << "Longest substring length: " << res << endl;
    return 0;
}
