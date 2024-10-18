#include <iostream>
using namespace std;

class Test
{
    public:
        string name;
        int code;

        Test(string name = "codetree", int code = 50)
        {
            this->name = name;
            this->code = code;
        }
};

int main() {
    string name;
    int code;

    cin >> name >> code;

    Test test1 = Test();
    Test test2 = Test(name, code);

    cout << "product " << test1.code  << " is " << test1.name << endl;
    cout << "product " << test2.code  << " is " << test2.name << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}