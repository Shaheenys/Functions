#include <iostream>
using namespace std;

int addnum(int a, int b);
int multynum(int a, int b);
int divnum(double a, double b);

int main()
{
    int num1 = 2;
    int num2 = 4;

    double num3 = 2;
    double num4 = 4;

    addnum(num1, num2);
    multynum(num1, num2);
    divnum(num3, num4);
    
}

int addnum(int a,int b) {
    
    int sum = a + b;
    cout << sum << endl;
    return sum;

}

int multynum(int a, int b) {

    int sum = a * b;
    cout << sum << endl;
    return sum;

}

int divnum(double a, double b) {

    double sum = a / b;
    cout << sum << endl;
    return sum;
}