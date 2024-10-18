#include <iostream>
using namespace std;

void Print(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    Print(n);

    return 0;
}