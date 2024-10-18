#include <iostream>
#define max 5
using namespace std;

class Test
{
    public:
        string name;
        int score;
        Test(string name, int score)
        {
            this->name = name;
            this->score = score;
        }
        Test(){}
};

Test test[max];

int main() {
    for(int i = 0; i < max; i++)
    {
        string name;
        int score;

        cin >> name >> score;

        test[i] = Test(name, score);
    }

    int min = 0;
    for(int i = 0; i < max; i++)
    {
        if(test[min].score > test[i].score)
            min = i;
    }

    cout << test[min].name << " " << test[min].score;
    // 여기에 코드를 작성해주세요.
    return 0;
}