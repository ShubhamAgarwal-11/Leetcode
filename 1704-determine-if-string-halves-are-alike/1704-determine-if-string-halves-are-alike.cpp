class Solution {
public:
    bool halvesAreAlike(string s) {
        auto first=s.begin();
        auto last=s.end()-1;
        transform(s.begin(),s.end(),s.begin(),:: tolower);
        int count1=0,count2=0;
        while(first<last){
            if(*first == 'a' || *first == 'e' || *first == 'i' || *first == 'o' || *first == 'u'){
                count1++;
            }
            if(*last == 'a' || *last == 'e' || *last == 'i' || *last == 'o' || *last == 'u'){
                count2++;
            }
            first++;
            last--;
            
        }
        if(count1 == count2)
            return true;
        return false;
    }
};