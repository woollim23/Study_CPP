#include <iostream>
using namespace std;

int Test(int n, int cnt)
{
    if(n == 1) return cnt;

    if(n % 2 == 0) n /= 2;
    else n = n * 3 + 1;
    cnt++;
    
    return Test(n, cnt);
}


int main() {
    int n, cnt = 0;
    cin >> n;

    cout << Test(n, cnt);
    return 0;
}