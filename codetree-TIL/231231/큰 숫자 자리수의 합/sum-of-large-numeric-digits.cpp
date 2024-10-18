#include <iostream>
using namespace std;

int Test(int sum, int tmp)
{
    sum += (tmp % 10);
    tmp = tmp / 10;

    if(tmp <= 0) return sum;
    else return Test(sum, tmp);
}

int main()
{
    int a, b, c, sum = 0;
    cin >> a >> b >> c;

    int tmp = a * b * c;

    cout << Test(sum, tmp);
    return 0;
}