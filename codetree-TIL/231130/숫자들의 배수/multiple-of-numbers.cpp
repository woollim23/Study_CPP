#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, i = 1;
    cin >> n;

    while(1)
    {
        cout << n * i << " ";

        if((n*i) % 5 == 0) cnt++;
        if(cnt == 2) break;

        i++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}