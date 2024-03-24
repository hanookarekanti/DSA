class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long sum = 0;
        long mod = pow(10, 9) + 7;
        for (int i = 0; i < arr.size(); i++) {
            vector<int> vec;
            vec.push_back(arr[i]);
            int min_value = arr[i];
            sum += min_value;
            int j = i + 1;
            while (j < arr.size()) {
                vec.push_back(arr[j]);
                min_value = min(min_value, arr[j]); 
                sum += min_value;
                j++;
            }
        }
        if (sum > mod) return mod;
        return sum;
    }
};