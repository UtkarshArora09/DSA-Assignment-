class Solution {
public:
    void helper(vector<int> &nums,int i,int sum,vector<int>&res){
        int n=nums.size();
        if(i==n)return;
        sum+=nums[i];
        res.push_back(sum);
        helper(nums,i+1,sum,res);
    }
    vector<int> runningSum(vector<int>& nums) {
        vector<int>res;
        helper(nums,0,0,res);
        return res;
    }
};