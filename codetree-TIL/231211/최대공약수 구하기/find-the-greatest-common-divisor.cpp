#include <iostream>
using namespace std;

void imax(int n, int m)
{
    int max = (n > m) ? n : m;
    int tmp = 1;
    for(int i = 1; i <= max; i++)
    {
        if((n % i == 0) && (m % i == 0)) tmp = i;
    }

    cout << tmp;
}

int main() {
    int n, m;
    cin >> n >> m;

    imax(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}