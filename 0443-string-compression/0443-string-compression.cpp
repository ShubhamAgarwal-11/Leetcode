class Solution {
public:
    
//     using Run length encoding algo.
    int compress(vector<char>& chars) {
        int n= chars.size();
        int i=0;
        int index=0;
        while(i<n){
            int curr_char = chars[i];
            int count=0;
            
            while(i<n && chars[i] == curr_char){
                i++;
                count++;
            }
            
            chars[index]=curr_char;
            index++;
            
            if(count>1){
                string char_counts = to_string(count);
                for(auto&x : char_counts){
                    chars[index] = x;
                    index++;
                }   
            }
            
        }
        return index;
    }
};