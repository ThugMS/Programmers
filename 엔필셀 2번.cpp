//#include<vector>
//using namespace std;
//
//int ans;
//int N;
//
//bool up(int prev){
//    if(prev == 1){
//        return true;
//    }
//    return false;
//}
//
//bool down(int prev){
//    if(prev == 2){
//            return true;
//        }
//    return false;
//}
//
//bool left(int prev){
//    if(prev == 3){
//        return true;
//    }
//    return false;
//}
//
//bool right(int prev){
//    if(prev == 4){
//        return true;
//    }
//    return false;
//}
//
//void move(vector<vector<int>> board, int x, int y, int prev){
//    if(x<0 || x>=N || y<0 || y>=N){
//        return;
//    }
//    int index = board[x][y];
//
//    if(index == 0){
//        return;
//    }
//
//    switch(index){
//        case 1:
//            if(up(prev)){
//                ans++;
//                move(board,x,y-1,3);
//            }
//            else if(right(prev)){
//                ans++;
//                move(board,x+1,y,2);
//            }
//            return;
//
//        case 2:
//            if(down(prev)){
//                ans++;
//                move(board,x,y-1,3);
//            }
//            else if(right(prev)){
//                ans++;
//                move(board,x-1,y,1);
//            }
//            return;
//
//        case 3:
//            if(down(prev)){
//                ans++;
//                move(board,x,y+1,4);
//            }
//            else if(left(prev)){
//                ans++;
//                move(board,x-1,y,1);
//            }
//            return;
//
//        case 4:
//            if(up(prev)){
//                ans++;
//                move(board,x,y+1,4);
//            }
//            else if(left(prev)){
//                ans++;
//                move(board,x+1,y,2);
//            }
//            return;
//
//        case 5:
//            if(up(prev)){
//                ans++;
//                move(board,x-1,y,1);
//            }
//            else if(down(prev)){
//                ans++;
//                move(board,x+1,y,2);
//            }
//            return;
//
//        case 6:
//            if(right(prev)){
//                ans++;
//                move(board,x,y+1,4);
//            }
//            else if(left(prev)){
//                ans++;
//                move(board,x,y-1,3);
//            }
//            return;
//
//        case 7:
//            if(up(prev)){
//                ans++;
//                move(board,x-1,y,1);
//            }
//            else if(down(prev)){
//                ans++;
//                move(board,x+1,y,2);
//            }
//            else if(right(prev)){
//                ans++;
//                move(board,x,y+1,4);
//            }
//            else if(left(prev)){
//                ans++;
//                move(board,x,y-1,3);
//            }
//            return;
//
//    }
//
//}
//
//void starting(vector<vector<int>> board, int x, int y){
//    int index = board[x][y];
//
//    switch(index){
//        case 8:
//            move(board, x, y+1, 4);
//            break;
//
//        case 9:
//            move(board, x-1, y, 1);
//            break;
//
//        case 10:
//            move(board, x, y-1, 3);
//            break;
//
//        case 11:
//            move(board, x+1, y, 2);
//            break;
//    }
//}
//
//int solution(vector<vector<int> > board, int x, int y)
//{
//    int answer = -1;
//    ans = 1;
//    N = board.size();
//
//    starting(board, x, y);
//
//    answer = ans;
//
//    return answer;
//}
