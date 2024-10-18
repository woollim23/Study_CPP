#include <iostream>
#include <string>
using namespace std;

bool Test(string& a)
{
    int cnt = 0;
    int arr[27] = {};
    int n = a.length();
    for(int i = 0; i < n; i++)
    {
        arr[(int)a[i] - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(arr[i] > 0)
        {
            cnt++;
        }
    }

    if(cnt >= 2)
        return true;
    else
        return false;
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