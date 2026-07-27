class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int loc;

        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 0){
                loc = i;
                break;
            }
        }

        for(int i =loc+1; i<nums.size(); i++){
            if(nums[i] != 0 ){
                swap(nums[loc],nums[i]);
                loc++;
            }
        }
        
    }
};