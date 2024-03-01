class Solution {
public:
    int compress(vector<char>& chars) {
        int index =0,i=0;
        int size = chars.size();
        while(i<size){
            char ele = chars[i];
            int count =0;
            while(i<size && chars[i] == ele){
                count++; i++;
            }
            
            chars[index] = ele;
            index++;
            if(count > 1){
                for(auto num : to_string(count)){
                    chars[index] = num;
                    index++;                    
                }
            }
        }
        
        return index;
    }
};