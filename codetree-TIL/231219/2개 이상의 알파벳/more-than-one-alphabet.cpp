#include <iostream>
#include <string>
using namespace std;

bool Test(string &a)
{
    int s = a.length();
    int cnt = 0;
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < s; j++)
        {
            if((i != j) && (a[i] != a[j])) cnt++;
        }
    }

    if(cnt >= 2) return true;
    else return false;
}

int main() {
    string a;
    cin >> a;

    if(Test(a)) cout << "Yes";
    else cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}