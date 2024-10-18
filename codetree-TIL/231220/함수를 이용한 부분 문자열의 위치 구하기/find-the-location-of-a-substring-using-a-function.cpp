#include <iostream>
#include <string>
using namespace std;

string a;
string b;

int Test()
{
    int a_s = a.length();
    int b_s = b.length();

    for(int i = 0; i < a_s; i++)
    {
        bool check = true;

        if(b[0] == a[i])
        {
            int tmp = i;
            for(int j = 0; j < b_s; j++)
            {
                if(a[tmp++] != b[j]) check = false;
            }

            if(check) return i;
        }
    }

    return -1;
}

int main() {
    cin >> a >> b;

    cout << Test();
    // 여기에 코드를 작성해주세요.
    return 0;
}