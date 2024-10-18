#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cin >> n;

    while(n--)
    {
        int a;
        cin >> a;
        sum += a;
    }

    string s = to_string(sum);

    s = s.substr(1) + s.substr(0, 1);

    cout << s;
    // 여기에 코드를 작성해주세요.
    return 0;
}