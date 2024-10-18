#include <iostream>
using namespace std;

class Test
{
    public:
        string code;
        char color;
        int second;

        Test(string code, char color, int second)
        {
            this->code = code;
            this->color = color;
            this->second = second;
        }
        Test(){}
};

int main() {
    string code;
    char color;
    int second;

    cin >> code >> color >> second;

    Test test = Test(code, color, second);

    cout << "code : " << test.code << endl;
    cout << "color : " << test.color << endl;
    cout << "second : " << test.second << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}