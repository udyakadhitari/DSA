class Solution {
public:
    bool check(vector<int>& nums) {

        int err = 0;

        for(int i =0; i < nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                err += 1;
                if(nums[nums.size()-1]>nums[0]){
                    return false;
                }
            }

        }

        if(err>1) return false;
        return true;
        
    }
};