#include <iostream>
#include <string>
#define MAX 1000000
using namespace std;

int main() {
    int dx[MAX + 1] = {0, }, dy[MAX + 1] = {0, };
    string s;
    int d = 0;

    cin >> s;
    int s_size = s.length();
    for(int i = 1; i <= s_size; i++)
    {
        char dr = s[i - 1];        
        dx[i] = dx[i-1];
        dy[i] = dy[i-1];

        if(dr == 'L')
        {
            d -= 1;
            if(d == -1) d = 3;
        }
        else if(dr == 'R')
        {
            d += 1;
            if(d == 4) d = 0;
        }
        else if(dr == 'F')
        {
            // 0 북, 1 동, 2 남, 3 서
            if(d == 3)
            {
                dx[i] = dx[i] - 1;
            }
            else if(d == 2)
            {
                dy[i] = dy[i] - 1;
            }
            else if(d == 0)
            {
                dy[i] = dy[i] + 1;
            }
            else if(d == 1)
            {
                dx[i] = dx[i] + 1;
            }
        }
    }

    cout << dx[s_size] << " " << dy[s_size];
    // 여기에 코드를 작성해주세요.
    return 0;
}