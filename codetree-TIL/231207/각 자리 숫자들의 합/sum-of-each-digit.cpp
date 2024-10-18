#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cin >> n;

    string s = to_string(n);

    for(int i = 0; i < s.length(); i++)
    {
        sum += (int)(s[i]-'0');
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}