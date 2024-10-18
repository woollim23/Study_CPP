#include <iostream>
using namespace std;

int func(int n, int cnt)
{
    if(n == 1) return cnt;
    cnt ++;
    
    if(n%2 == 0) return func(n/2, cnt);
    else return func(n*3+1, cnt);
    
}

int main() {
    int n, cnt = 0;
    cin >> n;

    cout << func(n, cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}