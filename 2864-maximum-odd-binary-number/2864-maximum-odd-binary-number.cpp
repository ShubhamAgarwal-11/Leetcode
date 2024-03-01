class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string result(s.size(),'0');
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1')
                count++;
        }
        result[result.size()-1] = '1';
        count--;
        int i=0;
        while(count--){
            result[i] = '1';
            i++;
        }
        return result;
    }
};