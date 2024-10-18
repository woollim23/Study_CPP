#include <iostream>
#define MAX 1000000
using namespace std;

int main() {
    int a[MAX + 1] = {0,};
    int b[MAX + 1] = {0,};
    int n, m, t, a_s = 1, b_s = 1;
    char d;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> d >> t;
        if(d == 'R')
        {
            while(t--)
            {
                if(a_s != 1)
                {
                    a[a_s] = a[a_s-1] + 1;
                }
                else
                {
                    a[a_s] = 1;
                }
                a_s++;
            }
        }
        else
        {
            while(t--)
            {
                if(a_s != 1)
                {
                    a[a_s] = a[a_s-1] - 1;
                }
                else
                {
                    a[a_s] = -1;
                }
                a_s++;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        cin >> d >> t;
        if(d == 'R')
        {
            while(t--)
            {
                if(b_s != 1)
                {
                    b[b_s] = b[b_s-1] + 1;
                }
                else
                {
                    b[b_s] = 1;
                }
                b_s++;
            }
        }
        else
        {
            while(t--)
            {
                if(b_s != 1)
                {
                    b[b_s] = b[b_s-1] - 1;
                }
                else
                {
                    b[b_s] = -1;
                }
                b_s++;
            }
        }
    }

    int min;
    if(a_s > b_s) min = b_s;
    else min = a_s;

    bool check = false;
    for(int i = 1; i < min; i++)
    {
        if(a[i] == b[i])
        {
            check = true;
            min = i;
            break;
        }
    }

    if(check) cout << min;
    else cout << -1;
    // 여기에 코드를 작성해주세요.
    return 0;
}