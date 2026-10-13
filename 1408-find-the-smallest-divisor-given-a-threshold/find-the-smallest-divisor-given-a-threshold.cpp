int sum_of_array(int value,vector<int>& nums){
    int sum = 0;
    for(int i =0; i< nums.size(); i++){
       sum += (nums[i] + value - 1) / value;
    }
    return sum;

}




class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

       int maxx = *std::max_element(nums.begin(), nums.end());

       int low = 1;
       int  high = maxx;
       int ans = -1;

       while(low<=high){

        int mid = (high + low)/2;

        if(sum_of_array(mid,nums) > threshold){
            low = mid +1;
        }
        if(sum_of_array(mid,nums) <= threshold){
            high = mid-1;
            ans = mid;
        }

       }

       return ans;


        
    }
};