#include <iostream>
#include <string>
using namespace std;

bool Test(string& a)
{
    int n = a.length();

    for(int i = 0; i < (n / 2); i++)
    {
        if(a[i] != a[n-1-i])
            return false;
    }

    return true;
}

int main() {
    string a;
    cin >> a;

    if(Test(a))
        cout << "Yes";
    else
        cout << "No";

    // 여기에 코드를 작성해주세요.
    return 0;
}