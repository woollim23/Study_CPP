#include <iostream>
#include <string>
#define MAX 100000
using namespace std;

int main() {
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, -0, 1};
    string s;
    cin >> s;

    int s_size = s.length();

    int x = 0, y = 0, dr = 3;
    bool check = false;
    for(int i = 0; i < s_size; i++)
    {
        if(s[i] == 'L')
        {
            dr = (dr - 1 + 4) % 4;
        }
        else if(s[i] == 'R')
        {
            dr = (dr + 1) % 4;
        }
        else
        {
            x += dx[dr];
            y += dy[dr];
        }

        if(x == 0 && y == 0)
        {
            check = true;
            cout << i + 1;
            break;
        }
    }

    if(!check) cout << -1;
    return 0;
}