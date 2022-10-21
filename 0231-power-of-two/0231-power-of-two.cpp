class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        double k=log2(n);
        if(ceil(k)==k){
            return true;
        }
        return false;
        
        
        
    }
};