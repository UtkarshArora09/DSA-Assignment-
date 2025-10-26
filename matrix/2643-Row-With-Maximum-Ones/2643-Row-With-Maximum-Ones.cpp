class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int idx=-1;
        int maxCount=-1;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>maxCount){
                maxCount=count;
                idx=i;
            }
        }
        return {idx,maxCount};
    }
};
