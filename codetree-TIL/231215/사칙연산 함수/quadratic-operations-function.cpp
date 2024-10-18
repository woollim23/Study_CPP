#include <iostream>
using namespace std;
int Plus(int a, int b)
{
    return a + b;
}

int Minus(int a, int b)
{
    return a - b;
}

int Division(int a, int b)
{
    return a / b;
}

int Multiplication(int a, int b)
{
    return a * b;
}

int Calcul(int a, int b, int c)
{
    if(c == '+') return Plus(a, b);
    else if(c == '-') return Minus(a, b);
    else if(c == '/') return Division(a, b);
    else if(c == '*') return Multiplication(a, b);
}

int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;

    if(c == '+' || c == '-' || c == '/' || c == '*')
    {
        cout << a << " " << c << " " << b << " = " << Calcul(a, b, c);
    }
    else cout << "False";
    // 여기에 코드를 작성해주세요.
    return 0;
}