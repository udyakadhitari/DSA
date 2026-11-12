class Solution {
public:
    int maxDepth(string s) {

        int max_depth = INT_MIN;

        int depth = 0;

        for(char &ch : s)
        {
            if(ch == '(')
            {
                depth += 1;
            }
            if(ch == ')')
            {
                depth -= 1;
            }

            if(depth > max_depth)
            {
                max_depth = depth ;
            }
        }

        return max_depth;
        
    }
};