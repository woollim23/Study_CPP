#include <iostream>
using namespace std;

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        int sum = 0;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0) sum += j;
        }

        if(sum == i) cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}