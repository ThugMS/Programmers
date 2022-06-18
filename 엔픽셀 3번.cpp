//#include<vector>
//#include <iostream>
//
//using namespace std;
//
//int ans;
//
//bool checking(vector<vector<int>> board, int x, int y){
//    int index = board[x][y];
//    int N = board.size();
//
//    if(x>=2){
//        if(board[x-2][y] == index && board[x-1][y] == index){
//            return true;
//        }
//    }
//    if(x < N-2){
//        if(board[x+2][y] == index && board[x+1][y] == index){
//            return true;
//        }
//    }
//    if(x>=1 && x < N-1){
//        if(board[x+1][y] == index && board[x-1][y] == index){
//            return true;
//        }
//    }
//    if(y>=2){
//        if(board[x][y-2] == index && board[x][y-1] == index){
//            return true;
//        }
//    }
//    if(y< N-2){
//        if(board[x][y+2] == index && board[x][y+1] == index){
//            return true;
//        }
//    }
//    if(y>=1 && y<N-1){
//        if(board[x][y-1] == index && board[x][y+1] == index){
//            return true;
//        }
//    }
//    return false;
//}
//
//void down(vector<vector<int>> board, int x, int y){
//    int sub = board[x][y];
//    board[x][y] = board[x+1][y];
//    board[x+1][y] = sub;
//
//    if(checking(board, x, y) || checking(board,x+1,y)){
//        ans++;
//    }
//
//    sub = board[x][y];
//    board[x][y] = board[x+1][y];
//    board[x+1][y] = sub;
//}
//
//void right(vector<vector<int>> board, int x, int y){
//    int sub = board[x][y];
//    board[x][y] = board[x][y+1];
//    board[x][y+1] = sub;
//
//    if(checking(board, x, y) || checking(board,x,y+1)){
//        ans++;
//    }
//
//    sub = board[x][y];
//    board[x][y] = board[x][y+1];
//    board[x][y+1] = sub;
//}
//
//int solution(vector<vector<int> > board)
//{
//    int answer = -2;
//    ans = 0;
//
//    for(int i=0;i<board.size();i++){
//        for(int j=0;j<board[i].size();j++){
//            if(board.size()-1 > i){
//                down(board,i,j);
//            }
//            if(board.size()-1 > j){
//                right(board,i,j);
//            }
//        }
//    }
//    if(ans == 0){
//        return -1;
//    }
//    else{
//        return ans;
//    }
//}
//
//int main(){
//    
//    vector<vector <int>> board = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
//    cout << solution(board) << endl;
//}
