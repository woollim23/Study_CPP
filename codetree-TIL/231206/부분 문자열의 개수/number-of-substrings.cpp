#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt = 0, B_len = 0;
    string A, B;
    cin >> A >> B;


    for(int i = 0; i < A.length()-1; i++)
    {
        B_len = B.length();
        bool ch = false;

        if(A[i] == B[0])
        {
            int ai = i;
            int bi = 0;
            while(B_len--)
            {
                if(A[ai] == B[bi])
                {
                    ch = true;
                }
                else
                {
                    ch = false;
                }
                ai++;
                bi++;
            }
        }

        if(ch) cnt++;
    }
    
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}