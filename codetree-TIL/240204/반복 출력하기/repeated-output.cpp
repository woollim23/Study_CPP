#include <iostream>
using namespace std;

void Print(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "12345^&*()_";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    Print(n);

    return 0;
}