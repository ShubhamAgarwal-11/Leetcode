class Solution {
public:
    string reverseVowels(string s) {
        set<char>vowels;
        vowels.insert('a');
        vowels.insert('e');
        vowels.insert('i');
        vowels.insert('o');
        vowels.insert('u');
        vowels.insert('A');
        vowels.insert('E');
        vowels.insert('I');
        vowels.insert('O');
        vowels.insert('U');
        
        int start =0,end =s.size()-1;
        
        while(start<end){
            if(vowels.find(s[start]) != vowels.end() && vowels.find(s[end]) != vowels.end()){
                swap(s[start],s[end]);
                start++;end--;
            }
            if(vowels.find(s[start]) == vowels.end()) {
                start++;
            }
            if(vowels.find(s[end]) == vowels.end()) {
                end--;
            }
            
            
        }
        return s;
    
    }
};