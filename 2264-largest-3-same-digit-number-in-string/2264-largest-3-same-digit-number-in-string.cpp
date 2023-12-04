class Solution {
public:
    string largestGoodInteger(string num) {
        int max=0,flag=0;
        for(int i=0;i<(num.size()-3)+1;i++){
            int temp =0;
            // cout<<num[i]<<"  "<<num[i+1]<<"  "<<num[i+2]<<endl;
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                temp = num[i] - '0';
                flag = 1;
                // cout<<"temp : "<<temp<<endl;
                if(max<temp)
                    max = temp;
            }
        }
        if(flag == 0)
            return "";
        string ans = to_string(max);
        return ans+ans+ans;
    }
};























// class Solution {
// public:
//     string largestGoodInteger(string num) {
//         int temp = 0,max =0;
//         for(int i=0;i<((num.size()-3)+1);i++){
//             if(num[i] == num[i+1] == num[i+2]){
                
//             }
//             // cout<<"temp : "<<temp<<endl;
//             // cout<<"max : "<<max<<endl;
//         }
        
//     }
// };