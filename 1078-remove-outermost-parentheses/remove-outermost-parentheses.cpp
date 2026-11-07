class Solution {
public:
    string removeOuterParentheses(string s) {

        int depth = 0;
        string ans = "";

        for(int i =0; i<s.size(); i++){
            if(s[i] == '(')
            {
                if (depth > 0)
                {
                    ans += s[i];
                }

                depth += 1;

            }
            else{
                depth -= 1;

                if(depth > 0 )
                {
                    ans += s[i];
                }
            }
        }


        return ans;
        
    }
};