#include <iostream>
using namespace std;

int Test(int max, int n, int arr[])
{
    n--;
    if(n < 0) return max;
    if(max < arr[n]) max = arr[n];
    return Test(max, n, arr);
}

int main()
{
    int arr[100];
    int n, max = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Test(max, n, arr);
    

    return 0;
}