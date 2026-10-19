class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row = 0; row < 9; row++){
            unordered_set<int> st;
            for(int i=0;i<9;i++){
                if(board[i][row] == '.'){
                    continue;
                }

                if(st.count(board[i][row])){
                    return false;
                }

                st.insert(board[i][row]);

            }
        }

        for(int col = 0; col < 9; col++){
            unordered_set<int> st;
            for(int i=0;i<9;i++){
                if(board[col][i] == '.'){
                    continue;
                }

                if(st.count(board[col][i])){
                    return false;
                }

                st.insert(board[col][i]);

            }
        }


        for(int sq = 0;sq < 9; sq++){
            unordered_set<int> st;

            for(int i=0;i<3;i++){
                for(int j = 0;j<3;j++){
                    int row = (sq/3)*3+i;
                    int col = (sq%3)*3 + j;

                    if(board[row][col] == '.')
                        continue;
                    
                    if(st.count(board[row][col]))
                        return false;
                    
                    st.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};
