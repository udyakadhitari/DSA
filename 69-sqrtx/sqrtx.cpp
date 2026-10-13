class Solution {
public:
    int mySqrt(int x) {



        if(x == 0) return 0;


        int high = x;
        int low = 1;
        int ans =0;

        while(high >= low){

            int mid = low + (high-low)/2;
            

            if( ( mid )> x/mid ) {
                high = mid -1;

            }
            if((mid) <= x/mid){
                low = mid +1 ;
                ans = mid;
            }

        }

        return ans;
        
    }
};