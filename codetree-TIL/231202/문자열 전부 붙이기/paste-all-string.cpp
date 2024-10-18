#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s, res;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        res += s;
    }

    cout << res;
    // 여기에 코드를 작성해주세요.
    return 0;
}