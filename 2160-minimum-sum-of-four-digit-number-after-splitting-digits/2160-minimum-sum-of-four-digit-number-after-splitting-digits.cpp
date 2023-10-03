class Solution {
public:
    int minimumSum(int num) {
        vector<int>vec;
        
        while(num){
            vec.push_back(num%10);
            num=num/10;
        }
        
        sort(vec.begin(),vec.end());
        
        int temp1,temp2;
        temp1 = vec[0]*10+vec[3];
        temp2 = vec[1]*10+vec[2];
        return temp1+temp2;
    }
};