class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char>first;
        vector<char>second;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<(s.length()/2);i++)
            first.push_back(s[i]);
        for(int i=s.length()/2;i<s.length();i++)
            second.push_back(s[i]);
        int count1=0,count2=0;
        for(int i=0;i<first.size();i++){
            if(first[i] == 'a' || first[i] == 'e' || first[i] == 'i' || first[i] == 'o' || first[i] == 'u'){
                count1++;
            }
        }
        for(int i=0;i<second.size();i++){
            if(second[i] == 'a' || second[i] == 'e' || second[i] == 'i' || second[i] == 'o' || second[i] == 'u'){
                count2++;
            }
        }
        if(count1 == count2)
            return true;
        return false;
    }
};