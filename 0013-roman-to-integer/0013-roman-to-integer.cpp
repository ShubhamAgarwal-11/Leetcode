class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>umap;
        umap['I'] = 1;
        umap['V'] = 5;
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;
        int num = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'I' && s[i+1] == 'V'){
                num+=4;
                i++;
            }else if(s[i] == 'X' && s[i+1] == 'L'){
                num+=40;
                i++;
            }else if(s[i] == 'X' && s[i+1] == 'C'){
                num+=90;
                i++;
            }else if(s[i] == 'I' && s[i+1] == 'X'){
                num+=9;
                i++;
            }else if(s[i] == 'C' && s[i+1] == 'D'){
                num+=400;
                i++;
            }else if(s[i] == 'C' && s[i+1] == 'M'){
                num+=900;
                i++;
            }else{
                auto temp = umap.find(s[i]);
                num+=temp->second;
            }
        }
        return num;
    }
};