class Solution {
public:
    vector<int> minOperations(string boxes) {
        int i=0;

        
        vector<int>ans;
        int n=boxes.length();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(boxes[j]!='0'){
                    sum+=abs(j-i)*(boxes[j]-'0');
                }
            }
            ans.push_back(sum);
        }
        
        
        
        
        
        return ans;
    }
};