class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int high = nums.size()-1;
        int low = 0;

        while(high>=low){
            int mid= (high+low)/2;

            if(nums[mid] == target ) return true;


            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                high --;
                low ++;
                continue; 

            }

            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid]>= target){
                    high = mid-1;
                }
                else{
                    low = mid +1;
                }

            }
            else{
                if(target <= nums[high] && target>= nums[mid]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }

            }


        }

        return false;


        
    }
};