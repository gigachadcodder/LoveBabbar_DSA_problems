
vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
    }

    // Sort each pair and then the entire list of pairs to ensure a sorted output
    for(auto &pair : ans) {
        sort(pair.begin(), pair.end());
    }
    sort(ans.begin(), ans.end());

    return ans;
}