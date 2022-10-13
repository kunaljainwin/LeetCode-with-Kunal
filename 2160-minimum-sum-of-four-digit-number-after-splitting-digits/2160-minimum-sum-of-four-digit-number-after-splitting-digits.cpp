class Solution {
public:
    int minimumSum(int num) {
        vector<int>vec(4);
        int i=0;
        while(i<4){
            vec[i]=num%10;
            num/=10;
            i++;
        }
        sort(vec.begin(),vec.end());
        int d1=vec[0]*10+vec[3];
        int d2=vec[1]*10+vec[2];
        int sum=d1+d2;
        return sum;
        
        
        
    }
};