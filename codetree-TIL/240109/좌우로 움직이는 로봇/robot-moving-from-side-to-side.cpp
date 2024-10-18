#include <iostream>
#define MAX 1000000
using namespace std;

int main() {
    int a[MAX + 1] = {0, }, b[MAX + 1] = {0, };
    int n, m;
    cin >> n >> m;

    int time_a = 0; // a의 총 시간
    for(int i = 0; i < n; i++)
    {
        int t;
        char d;
        cin >> t >> d;
        for(int j = (time_a + 1); j <= (time_a + t); j++)
        {
            if(d == 'L')
                a[j] = a[j-1] - 1;
            else
                a[j] = a[j-1] + 1;
        }
        time_a += t;
        if(i == n-1)
        {
            for(int j = time_a + 1; j <= MAX; j++)
                a[j] = a[j-1];
        }
    }

    int time_b = 0; // b의 총 시간
    for(int i = 0; i < m; i++)
    {
        int t;
        char d;
        cin >> t >> d;
        for(int j = (time_b + 1); j <= (time_b + t); j++)
        {
            if(d == 'L')
                b[j] = b[j-1] - 1;
            else
                b[j] = b[j-1] + 1;
        }
        time_b += t;
        if(i == m-1)
        {
            for(int j = time_b + 1; j <= MAX; j++)
                b[j] = b[j-1];
        }
    }

/*
    for(int i = 0; i <= time_b; i++)
        cout << a[i] << " ";
    cout << endl;
    for(int i = 0; i <= time_b; i++)
        cout << b[i] << " ";
    cout << endl;
*///디버그코드      
    int cnt = 0;
    for(int i = 2; i <= MAX; i++)
    {
        if((a[i-1] != b[i-1]) && (a[i] == b[i]))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}