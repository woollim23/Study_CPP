#include <iostream>
#define OFFSET 100
#define max 200
using namespace std;

int main() {
    int x1[max] = {0, };
    int x2[max] = {0, };
    int check[max+1] = {0, };
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x1[i] >> x2[i];

        x1[i] += OFFSET;
        x2[i] += OFFSET;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = x1[i]; j < x2[i]; j++)
            check[j]++;
    }

    int c_max = 0;
    for(int i = 0; i <= max; i++)
    {
        if(check[i] > c_max) c_max = check[i];
        
    }

    cout << c_max;
    // 여기에 코드를 작성해주세요.
    return 0;
}