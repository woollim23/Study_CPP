#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    string a, b, tmp1, tmp2;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++)
    {
        if(isdigit(a[i]))
        {
            tmp1 += a[i];
        }
    }

    for(int i = 0; i < b.length(); i++)
    {
        if(isdigit(b[i]))
        {
            tmp2 += b[i];
        }
    }

    sum = stoi(tmp1) + stoi(tmp2);

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}