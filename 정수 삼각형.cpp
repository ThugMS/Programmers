//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int dp[500][500];
//vector<vector<int>> m_tri;
//
//int solution(vector<vector<int>> triangle) {
//    int answer = 0;
//    
//    m_tri = triangle;
//    
//    dp[0][0] = triangle[0][0];
//    
//    for(int i=0;i<triangle.size()-1;i++){
//        for(int j=0;j<triangle[i].size();j++){
//            int sum = dp[i][j];
//            
//            if(sum + triangle[i+1][j] > dp[i+1][j])
//                dp[i+1][j] = sum + triangle[i+1][j];
//            
//            if(sum + triangle[i+1][j + 1] > dp[i+1][j + 1])
//                dp[i+1][j + 1] = sum + triangle[i+1][j + 1];
//        }
//    }
//    
//    int size_ = triangle.size()-1;
//    
//    for(int i=0;i<triangle[size_].size();i++){
//        if(answer < dp[size_][i])
//            answer = dp[size_][i];
//    }
//    
//    return answer;
//}
