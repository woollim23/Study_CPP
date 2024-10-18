#include <iostream>
#define MAX 2000
#define OFFSET 1000
using namespace std;

int main() {
    int check[MAX + 1] = {0, };
    int n, idx = 1000;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        char c;
        cin >> x >> c;

        if(c == 'L')
        {
            for(int j = (idx-1); j >= (idx-x); j--)
            {
                check[j]++;
            }
            idx -= x;
        }
        else if(c == 'R')
        {
            for(int j = idx; j < (idx+x); j++)
            {
                check[j]++;
            }
            idx += x;
        }
    }


    //영역 구하기
    int sum = 0;
    for(int i = 0; i <= MAX; i++)
    {
        if(check[i] >= 2) sum++;
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}