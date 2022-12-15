class Solution {
public:
    int arr[1001][1001];
    int helper(string&text1,string&text2,int i,int j){
        if(i>=text1.length() || j>=text2.length())
            return 0;
        if(arr[i][j]!=-1)
            return arr[i][j];
        if(text1[i] == text2[j])
            return arr[i][j]=1+helper(text1,text2,i+1,j+1);
        else{
            int first=helper(text1,text2,i+1,j);
            int second=helper(text1,text2,i,j+1);
            return arr[i][j]=max(first,second);
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(arr,-1,sizeof(arr));
        return helper(text1,text2,0,0);
    }
};