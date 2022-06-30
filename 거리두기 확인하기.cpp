//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool checking(vector<string> place,int a, int b) {
//    if (a <= 3) {
//        if (place[a + 1][b] == 'P') {
//            return false;
//        }
//    }
//    if (b <= 3) {
//        if (place[a][b + 1] == 'P') {
//            return false;
//        }
//    }
//    if (a <= 2) {
//        if (place[a + 1][b] == 'P') {
//            return false;
//        }
//        else if (place[a + 2][b] == 'P' && place[a + 1][b] != 'X') {
//            return false;
//        }
//    }
//    if (b <= 2) {
//        if (place[a][b+1] == 'P') {
//            return false;
//        }
//        else if (place[a][b+2] == 'P' && place[a][b+1] != 'X') {
//            return false;
//        }
//    }
//    if (a <= 3 && b <= 3) {
//        if (place[a][b + 1] == 'P') {
//            return false;
//        }
//        else if (place[a + 1][b] == 'P') {
//            return false;
//        }
//        else if (place[a + 1][b + 1] == 'P' && !(place[a + 1][b] == 'X' && place[a][b+1] == 'X')) {
//            return false;
//        }
//    }
//    if (b >= 1 && a <= 3) {
//        if (place[a][b - 1] == 'P') {
//            return false;
//        }
//        else if (place[a + 1][b] == 'P') {
//            return false;
//        }
//        else if (place[a + 1][b - 1] == 'P' && !(place[a][b - 1] == 'X' && place[a + 1][b] == 'X')) {
//            return false;
//        }
//    }
//    return true;
//}
//
//vector<int> solution(vector<vector<string>> places) {
//    vector<int> answer;
//
//    for (int i = 0; i < places.size(); i++) {
//        int check = 1;
//        for (int a = 0; a < places[i].size(); a++) {
//            for (int b = 0; b < places[i][a].length(); b++) {
//                if (places[i][a][b] == 'P') {
//                    check = checking(places[i], a, b);
//                }
//                if (check == 0)
//                    break;
//            }
//            if (check == 0)
//                break;
//        }
//        answer.push_back(check);
//    }
//
//    return answer;
//}