class Solution {
public:
    int divisorSubstrings(int n, int k) {
        string num = to_string(n);
        int count=0;
        for(int i=0;i<=num.size()-k;i++){
            string temp = num.substr(i,k);
            int x=stoi(temp);
            if(x == 0 || n%x != 0)
                continue;
            cout<<x<<"  ";
            count++;
        }
        return count;
    }
};