class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int a=max_element(arr.begin(),arr.end())-arr.begin();
        return a;
    }
};