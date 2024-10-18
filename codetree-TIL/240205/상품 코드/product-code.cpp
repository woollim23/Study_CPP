#include <iostream>
using namespace std;

class Test
{
public:
    string code;
    int s;

    Test(string code = "codetree", int s = 50)
        :code(code)
        ,s(s)
    {

    }
};

int main() {
    Test test1 = Test();
    Test test2 = Test();
    
    cin >> test2.code >> test2.s;

    cout << "product " << test1.s << " is " << test1.code << endl;
    cout << "product " << test2.s << " is " << test2.code << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}