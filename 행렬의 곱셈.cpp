//#include <string>
//#include <vector>
//
//using namespace std;
//
//int SumMatrix(vector<vector<int>> arr1, vector<vector<int>> arr2, int row, int column){
//    int sum = 0;
//    
//    for(int i=0;i<arr1[row].size();i++){
//        int value = arr1[row][i] * arr2[i][column];
//        sum += value;
//    }
//    
//    return sum;
//}
//
//vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
//    vector<vector<int>> answer;
//    
//    answer.resize(arr1.size());
//    
//    for(int i=0;i<answer.size();i++){
//        answer[i].resize(arr2[0].size());
//    }
//    
//    for(int i=0;i<answer.size();i++){
//        for(int j=0;j<answer[i].size();j++){
//            answer[i][j] = SumMatrix(arr1, arr2, i, j);
//        }
//    }
//    
//    return answer;
//}
//
