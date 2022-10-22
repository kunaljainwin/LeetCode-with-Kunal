class Solution {
public:
    int numberOfMatches(int N) {
        int turns=0;
        while(N>1){
            if(N%2==0){
                N/=2;
                turns+=N;
            }
            else{
                N=1+(N-1)/2;
                
                turns+=N-1;
            }
        }
        return turns;
    }
};