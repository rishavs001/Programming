/*  
    ****CONSTRUCTOR OVERLOADING****

    >constructor is called every time a new object is declared
    >compiler makes a default and a copy constructor(OF NO PARAMETER) by default if no constructor is defined
    >IF USER MAKES ANY CONSTRUCTOR, COMPILER WILL NOT MAKE ANY DEFAULT CONSTRUCTOR

*/

#include<iostream>   
#include<conio.h>
#include<stdlib.h>    
using namespace std;


class complex
{
    private:
    int a,b;

    public:
    complex(int x, int y)
    {
        a=x;
        b=y;
        cout<<a<<endl<<b;
    }
    complex(int x)
    {
        a=x;
      //  b=y;

    }
    complex()       //Default constructor
    {
       // a=0;
       // b=0;
    }
    /*
    complex(complex &c)
    {
        a=c.a;
        b=c.b;
    }*/
};

int main()
{
   
    complex c1(3,4), c2(5),c3,c4=(5,6),c5(); //DIFFERENT WAYS OF INITIALIZING
    //FOR EACH OBJECT HERE THE CONSTRUCTOR IS EXECUTED EACH TIME

    getch();
}