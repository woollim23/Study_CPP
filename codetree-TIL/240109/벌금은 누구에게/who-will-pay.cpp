#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int arr[MAX + 1] = {0, };
    int n, m, k;

    cin >> n >> m >> k;

    bool check = false;// 학생이 있는지 없는지 체크
    for(int i = 0; i < m; i++)
    {
        int num;//벌금 받는 학생 번호
        cin >> num;
        arr[num]++;
        
        if(arr[num] >= k)
        {
            check = true;
            cout << num;
            break; // 최초 벌금학생을 찾았으니 반복문 종료
        }
    }

    if(!check) cout << -1;
    // 여기에 코드를 작성해주세요.
    return 0;
}