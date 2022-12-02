class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>first(26,0);
        vector<int>second(26,0);
        for(int i=0;i<word1.size();i++){
            int x= word1[i]-'a';
            first[x]++;
        }
        for(int i=0;i<word2.size();i++){
            int x= word2[i]-'a';
            second[x]++;
        }
        set<char>s1,s2;
        for(auto x : word1)
            s1.insert(x);
        for(auto x: word2)
            s2.insert(x);
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        if(first == second && s1 == s2)
            return true;
        return false;
        
    }
};