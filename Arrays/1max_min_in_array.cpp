#include <iostream>
using namespace std;

int getMax(int num[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
        return max;
}

int getMin(int num[], int n)
{

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
        return min;
}

int main()
{
    int size;
    cout<<"please enter the size of the array";
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout<<"the min of the array is" << getMin(num, size)<<endl;
    cout<<"the max of the array is "<< getMax(num, size)<<endl;
    return 0;
}