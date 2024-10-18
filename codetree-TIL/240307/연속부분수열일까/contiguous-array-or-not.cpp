#include <iostream>
using namespace std;

int main() {
    int n1, n2, j = 0;
    int A[100], B[100];
    bool check = true;

    cin >> n1 >> n2;

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
        if(A[i] == B[j])
        {
            j++;
            check = true;
            if(j == n2) break;
        }
        else if((A[i] != B[j]) && (j > 0))
        {
            check = false;
            j = 0;
        }
        else
        {
            check = false;
        }
    }

    if((check) && (j == n2)) cout << "Yes";
    else cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}