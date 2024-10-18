#include <iostream>
using namespace std;

class Test
{
    public:
        string secret_code;
        char meeting_point;
        int time;
    Test(string secret_code, char meeting_point, int time)
    {
        this->secret_code = secret_code;
        this->meeting_point = meeting_point;
        this->time = time;
    }
};

int main() {

    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    Test test1 = Test(secret_code, meeting_point, time);

    cout << "secret code : " << test1.secret_code << endl;
    cout << "meeting point : " << test1.meeting_point << endl;
    cout << "time : " << test1.time << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}