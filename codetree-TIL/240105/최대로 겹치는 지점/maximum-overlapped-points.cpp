#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int x1[MAX], x2[MAX];
    int check[MAX + 1] = {0, };
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x1[i] >> x2[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = x1[i]; j <= x2[i]; j++)
            check[j]++;
    }

    int max = 0;
    for(int i = 0; i <= MAX; i++)
    {
        if(check[i] > max) max = check[i];
    }

    cout << max;
    // 여기에 코드를 작성해주세요.
    return 0;
}