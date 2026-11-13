class Solution {
public:
    int myAtoi(string s) {

        
        int idx = 0;
        int sign = 1;


      


        while(idx < s.size() && s[idx] == ' ')
        {
            idx++;
        }

        // Handle only one sign
        if(idx < s.size() && (s[idx] == '+' || s[idx] == '-'))
        {
            if(s[idx] == '-') sign = -1;
            idx++;
        }

        int ans = 0;

        for(int i =idx; i <s.size(); i++ )
        {
            if(48>s[i] || s[i] > 57) break;


            if(ans > INT_MAX/10 || (ans == INT_MAX/10 && (s[i] -48) > 7 )) return sign == 1 ? INT_MAX : INT_MIN;

            ans = ans*10 + (s[i] - 48);


            
        }

        return ans * sign;
        
    }
};