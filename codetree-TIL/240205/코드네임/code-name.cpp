#include <iostream>
using namespace std;

class Test
{
public:
    char code;
    int score;

    Test(char code = 'c', int score = 0)
    : code(code)
    , score(score)
    {}
};



int main()
{
    int min = 100, index;
    Test test[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> test[i].code >> test[i].score;

        if(min > test[i].score)
        {
            min = test[i].score;
            index = i;
        }
    }

    cout << test[index].code << " " << test[index].score;
    // 여기에 코드를 작성해주세요.
    return 0;
}