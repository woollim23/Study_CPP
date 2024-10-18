#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int hand[251][MAX + 1] = {0, };//악수배열 : 행 - 시간, 열 - 악수한 개발자, 값 - 악수받은 개발자
    int infect[MAX + 1] = {0, };//감염 가능 횟수 : 개발자 번호 - 전염 가능 횟수
    int N;//개발자수
    int K;//전염가능 횟수
    int P;//최초 감염자 번호
    int T;//악수횟수
    int max_t = 0; // 악수한 마지막 시간

    cin >> N >> K >> P >> T;

    infect[P] = K + 1; // 최초 감염자에게 전염 횟수 부여

    for(int i = 1; i <= T; i++)
    {
        int t;//악수한 시간
        int x;//악수한 개발자
        int y;//악수 받은 개발자

        cin >> t >> x >> y;

        hand[t][x] = y; // 악수 기록 저장
        if(max_t < t) max_t = t; // 마지막 시간 기록
    }

    for(int i = 1; i <= max_t; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(hand[i][j] != 0)//악수 기록이 있으면 전염 확인
            {
                if((infect[j] >= 1) || (infect[hand[i][j]] >= 1))// 악수하는 사람들중 전염가능한 사람이 있으면
                {
                    if((infect[hand[i][j]] > 1) && (infect[j] > 1))// 둘다 감염자
                    {
                        infect[j]--;
                        infect[hand[i][j]]--;
                    }
                    else if((infect[j] > 1) && (infect[hand[i][j]] == 0))// 왼쪽만 감염자
                    {
                        infect[hand[i][j]] = K + 1;
                        infect[j]--;
                    }
                    else if((infect[hand[i][j]] > 1) && ((infect[j] == 0)))// 오른쪽만 감염자
                    {
                        infect[j] = K + 1;
                        infect[hand[i][j]]--;
                    }
                    else if((infect[j] > 1) && (infect[hand[i][j]] == 1))// 왼쪽은 전염횟수 다 떨어진 감염자
                    {
                        infect[j]--;
                    }
                    else if((infect[hand[i][j]] > 1) && ((infect[j] == 1)))// 오른쪽은 전염횟수 다 떨어진 감염자
                    {
                        infect[hand[i][j]]--;
                    }
                }
            }
        }
    }

    for(int i = 1; i <= N; i++)
    {
        if(infect[i] >= 1) cout << 1;
        else cout << 0; 
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}