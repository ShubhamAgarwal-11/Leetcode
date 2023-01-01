class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> temp;
        stringstream ss(s);
        string token;
        int count = 0;
        while(getline(ss, token, ' ')) {
            temp.push_back(token);
            count++;
        }
         
         int n = pattern.size();
        
         if (count != n) 
             return false;
        
         unordered_map<string, char> mp;
         set<char> used;
         for (int i = 0; i < n; i++)
         {
              if (mp.find(temp[i]) == mp.end() && used.find(pattern[i]) == used.end()) {
                   used.insert(pattern[i]);
                   mp[temp[i]] = pattern[i];
              }
              else if (mp[temp[i]] != pattern[i]) {
                   return false;
              }
         }
         return true;
    }
};