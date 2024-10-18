#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    string a, b;
    int A, B;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++)
    {
        if(!isdigit(a[i+1]))
        {
            a = a.substr(0, i+1);
        }
    }

    for(int i = 0; i < b.length(); i++)
    {
        if(!isdigit(b[i+1]))
        {
            b = b.substr(0, i+1);
        }
    }

    sum = stoi(a) + stoi(b);

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}