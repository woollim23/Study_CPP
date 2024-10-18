#include <iostream>
using namespace std;

bool Test(int M, int D)
{
    if((D <= 31) && (M <= 12))
    {
        if((M == 1) || (M == 3) || (M == 5) || (M == 7) || (M == 8) || (M == 10) || (M == 12))
        {
            if(D <= 31) return true;
        }
        else if((M == 4) || (M == 6) || (M == 9) || (M == 11))
        {
            if(D <= 30) return true;
        }
        else
        {
            if(D <= 28) return true;
        }
    }

    return false;
}

int main() {
    int M, D;
    cin >> M >> D;

    if(Test(M, D)) cout << "Yes";
    else cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}