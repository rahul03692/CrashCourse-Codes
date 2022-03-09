class Solution {
public:
    int countBinarySubstrings(string s){
        
        s+='.';
        int n = s.size();
        
        int prev = 0;
        int curr = 1;
        int ans = 0;
        
        for(int i=1;i<n;i++){
            
            if(s[i - 1] == s[i]) curr++;
            else{
                
                ans += min(prev,curr);
                
                prev = curr;
                curr = 1;
                
            }
            
        }
        
        return ans;
        
    }
};