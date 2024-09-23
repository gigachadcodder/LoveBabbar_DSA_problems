#include<iostream>
using namespace std;

int main()
{
    int num1 = 11;
    int num2 = num1;
    int* num3 = new int (22);
    int* num4 = num3;

    cout<<"num1 = " << num1 << endl;
    cout<<"num2 = " << num2 << endl;

    cout<<"num3 address =  " << num3 << endl;
    cout<<"num4 address = " << num4 << endl;
    
    cout<<"num3 = " << *num3 << endl;
    cout<<"num4 = " << *num4 << endl;
    

 return 0;
}   