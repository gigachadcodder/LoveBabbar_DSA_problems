#include<iostream>
using namespace std;

int printArr (int arr[], int n){

    cout<<"Inside the function" << endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<"going back to the main" <<endl;
}


int main()
{
    int num[100] ={1,2,3,5};
    printArr(num, 3);
    cout<<"printing the main function"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<num[i];
    }
    


 return 0;
}   