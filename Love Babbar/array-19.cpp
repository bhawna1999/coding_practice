class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int N = nums.size();
        int i=0;
        for(i=N-1;i>0;i--){
            if(nums[i]>nums[i-1])
                break;
        }
        if(i==0){
            reverse(nums.begin(),nums.end());
            return ;
        }
        int x=nums[i-1];
        int s=i;
        for(int j=i+1;j<N;j++){
            if(nums[j]>x && nums[j] <nums[s])
                s=j;
        }
        swap(nums[i-1],nums[s]);
        sort(nums.begin()+i,nums.end());
        return ;
    }
};

