class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

      int siz = strs.size();
      int min_word = INT_MAX;
     
      // finding min length of word
      for(int i =0; i<siz; i++){
        if(strs[i].size() < min_word ) min_word = strs[i].size();
      }

      // finding the longest string 

      string ans = "";
      
      for(int i =0; i< min_word; i++){
        int ch = strs[0][i];
        for(int j =1; j<siz; j++){
            if(strs[j][i] != ch) 
            {
                return ans;
            }
        }
        ans += ch;
      }


      

      return ans;
        
    }
};