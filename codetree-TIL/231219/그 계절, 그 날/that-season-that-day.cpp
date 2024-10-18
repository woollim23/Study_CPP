#include <iostream>
using namespace std;

void Season(int M)
{
    if((M >= 3) && (M <= 5)) cout << "Spring";
    else if((M >= 6) && (M <= 8)) cout << "Summer";
    else if((M >= 9) && (M <= 11)) cout << "Fall";
    else cout << "Winter";
}

bool TestY_1(int M, int D) //평년
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

    return false;
}

bool TestY_2(int M, int D) //윤년
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
        if(D <= 29) return true;
    }

    return false;
}

bool Test(int Y, int M, int D)
{
    if(Y % 4 == 0)
    {
        if(Y % 100 == 0)
        {
            if(Y % 400 == 0) return TestY_2(M, D);//윤년
            else return TestY_1(M, D);//평년
        }
        else return TestY_2(M, D);//윤년
    }
    else return TestY_1(M, D);//평년
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    if(Test(Y, M, D)) Season(M);
    else cout << -1;
    // 여기에 코드를 작성해주세요.
    return 0;
}