////#include <string>
////#include <vector>
////#include <stack>
////
////using namespace std;
////
////int solution(vector<vector<int>> board, vector<int> moves) {
////    int answer = 0;
////    stack<int> basket;
////    long board_size = board.size();
////    for(int i=0;i<moves.size();i++){
////        long top = 0;
////        while(top < board_size){
////            if(board[top][moves[i]-1] != 0){
////                break;
////            }
////            top++;
////        }
////        if(top < board_size){
////            if(!basket.empty()){
////                if(basket.top() == board[top][moves[i]-1]){
////                    basket.pop();
////                    answer += 2;
////                }
////                else{
////                    printf("%d push\n", board[top][moves[i]-1]);
////                    basket.push(board[top][moves[i]-1]);
////                }
////
////            }
////            else{
////                basket.push(board[top][moves[i]-1]);
////                printf("%d empty\n", board[top][moves[i]-1]);
////            }
////
////
////            board[top][moves[i]-1] = 0;
////        }
////    }
////
////    return answer;
////}
////
////int main(){
////    vector<vector<int>> board = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
////
////    vector<int> moves ={1,5,3,5,1,2,1,4};
////
////    printf("%d\n",solution(board, moves));
////}
////
////
////
////
////0 0 0 0 0
////0 0 1 0 3
////0 2 5 0 1
////4 2 4 4 2
////3 5 1 3 1
