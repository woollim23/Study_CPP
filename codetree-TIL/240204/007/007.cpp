#include <iostream>
#include <string>
using namespace std;

class Test
{
public:
    string code;
    char c;
    int h;

    Test(string code, char c, int h){
        this->code = code;
        this->c = c;
        this->h = h;
    }
};

int main() {
    string code;
    char c;
    int h;

    cin >> code >> c >> h;

    Test test = Test(code, c, h);

    cout << "secret code : " << test.code << endl;
    cout << "meeting point : " << test.c << endl;
    cout << "time : " << test.h << endl;

    // 여기에 코드를 작성해주세요.
    return 0;
}