#include <string>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    int a[100];
    int b[100];
    int n;
    bool check = true;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            check = false;
        }
    }

    if(check) cout << "Yes";
    else cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}