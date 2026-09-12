int bs (vector<int>& nums, int target,int low, int high, int idx){
    if(low>high ) return idx;
    int mid = (low+high)/2;
    if(nums[mid] >= target) return bs(nums,target,low,mid-1,mid);
    return bs(nums,target,mid+1,high,idx);
}


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return bs(nums,target,0,nums.size()-1,nums.size());
        
    }
};