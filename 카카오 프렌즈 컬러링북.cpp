//#include <vector>
//
//using namespace std;
//
//int cnt;
//
//void bfs (bool visit[101][101], int m, int n, vector<vector<int>>& picture,int  i,int j, int ans){
//    if(i < 0 || i >= m || j<0 || j>=n || picture[i][j] != ans || visit[i][j] == true)
//        return;
//    
//    visit[i][j] = true;
//    cnt++;
//    
//    bfs(visit, m, n, picture, i-1, j, ans);
//    bfs(visit, m, n, picture, i+1, j, ans);
//    bfs(visit, m, n, picture, i, j-1, ans);
//    bfs(visit, m, n, picture, i, j+1, ans);
//    
//}
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//vector<int> solution(int m, int n, vector<vector<int>> picture) {
//    int number_of_area = 0;
//    int max_size_of_one_area = 0;
//    
//    bool visit[101][101] = {false, };
//    
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            if(visit[i][j] == false && picture[i][j] != 0){
//                int ans = picture[i][j];
//                cnt = 0;
//                bfs(visit, m, n, picture, i, j, ans);
//                
//                number_of_area++;
//                max_size_of_one_area = max_size_of_one_area < cnt ? cnt : max_size_of_one_area;
//            }
//        }
//    }
//    
//    vector<int> answer(2);
//    answer[0] = number_of_area;
//    answer[1] = max_size_of_one_area;
//    return answer;
//}
