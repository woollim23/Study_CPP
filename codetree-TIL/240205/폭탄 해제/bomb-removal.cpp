#include <iostream>
using namespace std;

class Test
{
public:
    string code;
    char c;
    int s;

    Test(string code = "해제 코드", char c = 'R', int s = 10)
        :code(code)
        ,c(c)
        ,s(s)
    {

    }
};

int main() {
    Test test = Test();
    
    cin >> test.code >> test.c >> test.s;

    cout << "code : " << test.code << endl;
    cout << "color : " << test.c << endl;
    cout << "second : " << test.s << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}