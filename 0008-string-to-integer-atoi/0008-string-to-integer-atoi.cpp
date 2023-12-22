class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        //remove starting spaces
        while(1){
            if(s[i] != ' ')
                break;
            i++;
        }
        double num=0;
        bool plus = s[i] == '+'? true : false;
        bool minus = s[i] == '-'? true : false;
        plus == true? i++: i;
        minus == true? i++: i;
        while(i<s.size() && s[i]>= '0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
            i++;
        }
        num = minus == true? (-1)*num : num;
        num = num>INT_MAX? INT_MAX : num;
        num = num<INT_MIN? INT_MIN : num;
        return int(num);
    }
};