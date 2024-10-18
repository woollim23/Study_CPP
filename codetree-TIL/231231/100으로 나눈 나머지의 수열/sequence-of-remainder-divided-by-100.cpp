#include <iostream>
using namespace std;

int Test(int i, int n, int arr[])
{
    if(i == n || n == 1 || n == 2) return arr[n-1];
    arr[i] = (arr[i-1] * arr[i-2]) % 100;
    return Test(i+1, n, arr);
}

int main() {
    int arr[20] = {2, 4, };
    int n, i = 2;
    cin >> n;

    cout << Test(i, n, arr);
    return 0;
}