#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[20];
    int n, sum = 0, cnt = 0;
    char c;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    cin >> c;

    for(int i = 0; i < n; i++)
    {
        if(s[i][0] == c)
        {
            sum += s[i].length();
            cnt++;
        }
    }

    cout.precision(2);
    cout << fixed << cnt << " " << (double)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}