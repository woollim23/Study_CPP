#include <iostream>
#include <string>
using namespace std;

int main() {
    int idx = -1;
    string s1, s2;
    cin >> s1 >> s2;

    idx = s1.find(s2);
    
    cout << idx;
    // 여기에 코드를 작성해주세요.
    return 0;
}