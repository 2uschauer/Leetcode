class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
          map<char,bool>row;
          map<char,bool>colum;
          map<char,bool>subgrid;
          for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
              if(row[board[i][j]]==true)return false;
              row[board[i][j]]=true;
            }//row check
            if(board[j][i]!='.'){
              if(colum[board[j][i]]==true)return false;
              colum[board[j][i]]=true;
            }//colum check
            if(board[i/3*3+j/3][i%3*3+j%3]!='.'){
                if(subgrid[board[i/3*3+j/3][i%3*3+j%3]]==true)return false;
                subgrid[board[i/3*3+j/3][i%3*3+j%3]]=true;
            }//subgrid check
          }
        }
        return true;
    }
};
/*
主要思想是行、列、3X3格子都测一遍，前两个比较简单，唯一难点是后面那个需要推导
*/
