class Solution {
public:
    vector<pair<int,int>>directions= {{0,1},{1,0},{0,-1},{-1,0}};
    int m,n;
    bool find(vector<vector<char>>&board,int i,int j,string word,int idx){
        if(idx == word.size())
            return true;
        if(i<0 || j<0 || i>=m || j>=n || board[i][j] == '#')
            return false;
        if(board[i][j] != word[idx])
            return false;
        char temp = word[idx];
        board[i][j] = '#';
        for(auto&dir : directions){
            int _i = i+dir.first;
            int _j = j+dir.second;
            
            if(find(board,_i,_j,word,idx+1))
                return true;
        }
        board[i][j] = temp;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == word[0] && find(board,i,j,word,0)){
                    return true;
                }
            }
        }
        return false;
    }
};