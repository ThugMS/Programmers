//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<int> scoville, int K) {
//    int answer = 0;
//    priority_queue<int, vector<int>, greater<int>> pq;
//    for (int i = 0; i < scoville.size(); i++) {
//        pq.push(scoville[i]);
//    }
//
//    while (pq.top() < K) {
//        int first = 0;
//        int second = 0;
//        if (!pq.empty()) {
//            first = pq.top();
//            pq.pop();
//            
//        }
//        else {
//            answer = -1;
//            break;
//        }
//        if (!pq.empty()) {
//            second = pq.top();
//            pq.pop();
//        }
//        else {
//            answer = -1;
//            break;
//        }
//
//        int new_food = first + (second * 2);
//        pq.push(new_food);
//        answer++;
//    }
//
//    return answer;
//}