#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt = 0;
    string A;

    cin >> n >> A;

    while(n--)
    {
        string a;
        cin >> a;

        if(A == a) cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}