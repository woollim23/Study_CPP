#include <iostream>
#define MAX 1000000
using namespace std;

int main() {
    int a[MAX + 1] = {0, }, b[MAX + 1] = {0, };
    int n, m, v, t;
    cin >> n >> m;

    int time_a = 0; // a의 총 시간
    for(int i = 0; i < n; i++)
    {
        cin >> v >> t;
        for(int j = (time_a + 1); j <= (time_a + t); j++)
            a[j] = a[j-1] + v;
        time_a += t;
    }

    int time_b = 0; // b의 총 시간
    for(int i = 0; i < m; i++)
    {
        cin >> v >> t;
        for(int j = (time_b + 1); j <= (time_b + t); j++)
            b[j] = b[j-1] + v;
        time_b += t;
    }

/*
    for(int i = 0; i <= time_a; i++)
        cout << a[i] << " ";
    cout << endl;
    for(int i = 0; i <= time_b; i++)
        cout << b[i] << " ";
    cout << endl;
*///디버그코드      
    int cnt = 0;
    for(int i = 2; i <= time_a; i++)
    {
        if((a[i-1] <= b[i-1]) && (a[i] > b[i]))
        {
            cnt++;
        }
        else if((a[i-1] > b[i-1]) && (a[i] <= b[i]))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}