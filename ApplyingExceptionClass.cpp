
#include<cstring>
#include<iostream>

using namespace  std;

class MyException{
public:
    char str_err_info[80];
    double evaluated_digit;

    MyException()
    {
        *str_err_info   = 0;
        evaluated_digit = 0;
    }

    MyException(char *s, double j)
    {
        strcpy(str_err_info, s);
        evaluated_digit = j;
    }
};

void divide(double a, double b)
{
    try
    {
        if(!b) //if(b) is equivalent to if(b != 0) ,!(b != 0) is like saying (b == 0)
            throw MyException("Can't divide by zero", b);

        cout << "Result : " << a / b << endl;
    }
    catch(MyException e)
    {
        cout << e.str_err_info << " : " << e.evaluated_digit << endl;
    }
}

int main()
{
    double i, j;

    do
    {
        cout << "Enter numerator or (0 to stop): ";
        cin >> i;

        cout << "Enter denominator: ";
        cin >> j;

        divide(i, j);

    }while(i != 0);

    return 0;
}
