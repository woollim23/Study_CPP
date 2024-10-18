#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum = 0, cnt = 0;
    string s[10];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for(int i = 0; i < n; i++)
    {
        sum += s[i].length();
        if(s[i][0] == 'a') cnt++;
    }
    cout << sum << " " << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}