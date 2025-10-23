class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd=1;
        int minProd=1;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxProd,minProd);
            }
            maxProd=max(nums[i],maxProd*nums[i]);
            minProd=min(nums[i],minProd*nums[i]);
            maxi=max(maxi,maxProd);
        }
        return maxi;
    }
};