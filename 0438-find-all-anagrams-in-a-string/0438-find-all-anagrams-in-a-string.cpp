class Solution {
public:
    bool allZeros(vector<char>&counter){
        for(auto&x : counter){
            if(x != 0)
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
        
        vector<char>counter(26,0);
        for(int i=0;i<p.size();i++){
            counter[p[i]-'a']++;
        }
        
        int i=0,j=0;
        int sSize = s.size();
        int pSize = p.size();
        while(j<sSize){
            counter[s[j]-'a']--;
            if((j-i+1) == pSize){
                if(allZeros(counter)){
                    result.push_back(i);
                }
                counter[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return result;
    }
};