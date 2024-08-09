#include<iostream>
using namespace std;

int arrSum(int arr[], int n){

    int sum = 0; 

    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }

    return sum;
}

int main()
{
    int size, num[100];
    cout<<"please enter the size of the array";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    
    cout<<"the sum of the elemets are" <<arrSum(num, size)<<endl;
 return 0;
}           