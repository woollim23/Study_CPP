#include <iostream>
#define MAX 100
using namespace std;

bool Test(int* a, int* b, int n1, int n2)
{
    for(int i = 0; i < n1; i++)
    {
        if(b[0] == a[i])
        {
            bool check = true;
            for(int j = 0; j < n2; j++)
            {
                if(b[j] != a[i + j])
                {
                    check = false;
                    break;
                }
            }
            if(check)
                return true;
        }
    }

    return false;

}

int main() {
    int a[MAX], b[MAX];
    int n1, n2;
    cin >> n1 >> n2;

    for(int i = 0; i < n1; i++)
        cin >> a[i];

    for(int i = 0; i < n2; i++)
        cin >> b[i];

    if(Test(a, b, n1, n2))
        cout << "Yes";
    else
        cout << "No";

    // 여기에 코드를 작성해주세요.
    return 0;
}