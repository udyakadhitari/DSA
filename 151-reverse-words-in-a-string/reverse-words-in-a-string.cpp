class Solution {
public:
    string reverseWords(string s) {

        string word = "";
        string ans = "";


        for(int i= 0 ; i< s.size() ; i++)
        {
            if(s[i] != ' ')
            {
                word += s[i];
            }
            else
            {
                if(word != "")
                {
                    ans.insert(0,word + " ");
                }
                word = "";
            }
        }

        if(word != ""){
            ans.insert(0,word + " ");
        }

        ans.pop_back();
        return ans;
        
    }
};