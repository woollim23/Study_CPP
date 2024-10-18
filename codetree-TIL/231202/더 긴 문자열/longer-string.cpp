#include <iostream>
#include <string>
using namespace std;

int main() {
    int n1, n2;
    string s1, s2;

    cin >> s1 >> s2;

    n1 = s1.length();
    n2 = s2.length();

    if(n1 == n2) cout << "same";
    else if(n1 > n2) cout << s1 << " " << n1;
    else cout << s2 << " " << n2;
    // 여기에 코드를 작성해주세요.
    return 0;
}