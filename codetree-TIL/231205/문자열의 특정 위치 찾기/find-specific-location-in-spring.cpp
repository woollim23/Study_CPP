#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char c;
    int idx = -1;
    
    cin >> s >> c;

    
    if(s.find(c) != string::npos)
    {
        idx = s.find(c);
    }

    if(idx > -1)
    {
        cout << idx;
    }
    else
    {
        cout << "No";
    }
    



    // 여기에 코드를 작성해주세요.
    return 0;
}