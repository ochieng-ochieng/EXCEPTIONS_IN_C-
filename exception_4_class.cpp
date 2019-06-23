#include<cstring>
#include<iostream>

using namespace  std;

class MyException{
public:
    char str_what[80];
    int what;

    MyException()
    {
        *str_what = 0;
        what = 0;
    }
    MyException(char *s, int i)
    {
        strcpy(str_what, s);
        what = i;
    }

};

int main()
{
    int i;

    try{
        cout << "Enter a positive number : ";
        cin >>i;
        if(i < 0)
            throw MyException("Not possitive", i);
    }
    catch(MyException e){
        cout << e.str_what << " : " << e.what << endl;
    }


    return 0;
}
