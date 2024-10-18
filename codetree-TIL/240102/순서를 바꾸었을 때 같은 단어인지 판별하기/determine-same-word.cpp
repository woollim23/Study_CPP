#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a == b) cout << "Yes";
    else cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}