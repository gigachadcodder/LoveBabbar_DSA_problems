#include<iostream>
#include<vector>
using namespace std;
// brute force 
std::vector<int> three_sum(int arr[], int size, int target) {
    std::vector<int> ans;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                    return ans;  
                }
            }
        }
    }
    return ans;  
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 6;
    std::vector<int> result = three_sum(arr, 5, target);

    if (!result.empty()) {
        cout << "The three sum pair is: ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
    } else {
        cout << "No such triplet found";
    }

    return 0;
}
