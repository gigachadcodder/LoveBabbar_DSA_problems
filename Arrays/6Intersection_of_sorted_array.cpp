#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

// Brute force method O(n*M)
void intersections(int arr1[], int arr2[], int n, int m) {
    for (int i = 0; i < n; i++) {
        int element = arr1[i];
        for (int j = 0; j < m; j++) {
            if (element < arr2[j]) {
                break;
            }
            if (element == arr2[j]) {
                cout << element << " ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}

// Optimized method O(n + m)
vector<int> optimized(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[4] = {1, 2, 3, 4};
    int n = 5;
    int m = 4;

    // Brute force method output
    cout << "Intersections (Brute force): ";
    intersections(arr1, arr2, n, m);
    cout << endl;

    // Optimized method output
    cout << "Intersections (Optimized): ";
    vector<int> result = optimized(arr1, arr2, n, m);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
