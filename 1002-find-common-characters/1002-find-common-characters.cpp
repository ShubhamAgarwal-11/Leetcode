class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>freq(26,INT_MAX);
        
        for(auto &word : words){
            vector<int>countWord(26,0);
            for(char &ch : word){
                countWord[ch-'a']++;
            }
            for(int i=0;i<26;i++){
                freq[i] = min(freq[i],countWord[i]);
            }
        }
        
        vector<string>result;
        
        for(int i=0;i<26;i++){
            int count = freq[i];
            while(count--){
                result.push_back(string(1,'a'+i));
            }
        }
        return result;
    }
};