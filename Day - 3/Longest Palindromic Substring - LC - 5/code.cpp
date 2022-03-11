class Solution {
public:

    //MOVE AROUND CENTER'S
    string longestPalindrome(string s){
        
        int n = s.size();
        string ans = "";
        ans = s[0];
        
        for(int i=1;i<n;i++){
            
            int left = i - 1;
            int right = i;
            int count = 1;
            
            //check for even cases
            while(right < n && s[left] == s[right]){
                
                right++;
                count++;
                
            }
            
            left--;
            //for odd cases
            while(left >= 0 && right < n && s[left] == s[right]){
                
                left--;
                right++;
                count += 2;
                
            }
            
            if(count > ans.size()) ans = s.substr(left + 1,right - left - 1);
            
        }
        
        return ans;
        
    }
};