//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//    vector<int> answer;
//
//    while(!progresses.empty()){
//        int cnt =0;
//        for(int i=0;i<progresses.size();i++){
//            progresses[i] += speeds[i];
//        }
//        for(int i=0;i<progresses.size();i++){
//            if(progresses[i]>=100){
//                cnt++;
//                progresses.erase(progresses.begin()+i);
//                speeds.erase(speeds.begin() + i);
//                i--;
//                continue;
//            }
//            break;
//        }
//        if(cnt != 0)
//            answer.push_back(cnt);
//    }
//
//    return answer;
//}
