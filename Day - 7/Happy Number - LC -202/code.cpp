class Solution {
public:
    
    int getNext(int n){
        
        int sum = 0;
        
        while(n){
            
            int rem = n % 10;
            sum += rem * rem;
            n /= 10; 
            
        }
        
        return sum;
        
    }
    
    bool isHappy(int n){
        
        //unordered_set<int>hs;
        
        int slow = n;
        int fast = getNext(n);
        
        while(fast != -1 && slow != fast){
            
            slow = getNext(slow);
            fast = getNext(getNext(fast));
            
        }
        
        return fast == 1;
        
    }
};