class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            while(vec.size()<i+1&&j<nums.size()){
                if(nums[i]<nums[j]) vec.push_back(nums[j]);
                j++;
            }j=0;
            while(vec.size()<i+1&&j<i){
                if(nums[i]<nums[j]) vec.push_back(nums[j]);
                j++;
            }
            if(vec.size()<i+1) vec.push_back(-1);
        }
        return vec;
    }
};