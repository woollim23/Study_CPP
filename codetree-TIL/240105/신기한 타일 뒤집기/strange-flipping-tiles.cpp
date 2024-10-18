#include <iostream>
#define MAX 20000
using namespace std;
// 0 - 백지, 1 - 흰색, 2 - 검은색
int main() {
    int paper[MAX + 1] = {0, };
    int n, idx = 10000;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        char c;
        cin >> x >> c;

        if(c == 'L')
        {
            for(int j = idx; j > (idx-x); j--)
            {
                paper[j] = 1;
            }
            idx -= x;
            idx++;
        }
        else if(c == 'R')
        {
            for(int j = idx; j < (idx+x); j++)
            {
                paper[j] = 2;
            }
            idx += x;
            idx--;
        }
    }

    int w = 0, b = 0;
    for(int i = 0; i <= MAX; i++)
    {
        if(paper[i] == 1) w++;
        else if(paper[i] == 2) b++;
    }
    cout << w << " " << b;
    // 여기에 코드를 작성해주세요.
    return 0;
}