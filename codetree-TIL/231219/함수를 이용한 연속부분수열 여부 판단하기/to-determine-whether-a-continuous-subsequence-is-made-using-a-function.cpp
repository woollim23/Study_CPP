#include <iostream>
using namespace std;

bool Test(int n1, int n2)
{
    int A[100];
    int B[100];

    for(int i = 0; i < n1; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n2; i++)
    {
        cin >> B[i];
    }

    for(int i = 0; i < n1; i++)
    {
        if(B[0] == A[i])
        {
            bool check = true;
            int tmp = i;

            for(int j = 0; j < n2; j++)
            {
                if(B[j] != A[tmp++]) check = false; 
            }

            if(check) return true; 
        }
    }

    return false;
}

int main() {
    int n1, n2;

    cin >> n1 >> n2;

    if(Test(n1, n2)) cout << "Yes";
    else cout << "No";

    // 여기에 코드를 작성해주세요.
    return 0;
}