int starting(vector<int>& nums, int target, int high, int low, int idx){
    if(low>high) return idx;
    int mid = (high+low)/2;
    if(nums[mid] >= target) return starting(nums,target,mid-1,low,mid);
    return starting(nums,target,high,mid+1,idx);
}

int ending(vector<int>& nums, int target, int high, int low, int idx){
    if(low>high) return idx;
    int mid = (high+low)/2;
    if(nums[mid]<= target ) return ending(nums,target,high,mid+1,mid);
    return ending(nums,target,mid-1,low,idx);
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

vector<int> ans;

        int firstIndex = starting(
            nums, target, nums.size() - 1, 0, nums.size()
        );

        int lastIndex = ending(
            nums, target, nums.size() - 1, 0, -1
        );

        int first = -1;
        int last = -1;

        if(firstIndex < nums.size() && nums[firstIndex] == target)
            first = firstIndex;

        if(lastIndex >= 0 && lastIndex < nums.size() && nums[lastIndex] == target)
            last = lastIndex;

        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};