//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//bool compare(pair<int,double> a, pair<int, double> b){
//    if(a.second == b.second){
//        return a.first < b.first;
//    }
//    return a.second > b.second;
//}
//vector<int> solution(int N, vector<int> stages) {
//    vector<int> answer;
//
//    vector<pair<int,double>> yes(502);
//    vector<int> user(502, 0);
//    vector<int> clear(502, 0);
//
//    for(int i=0;i<stages.size();i++){
//        user[stages[i]]++;
//    }
//
//    for(int i=1;i<=N;i++){
//        for(int j=i;j<=N+1;j++){
//            clear[i] += user[j];
//        }
//    }
//
//    for(int i=1;i<=N;i++){
//        yes[i].first = i;
////        cout << user[i] << " " << clear[i] << endl;
//        if(clear[i] == 0){
//            yes[i].second = 0.0;
//        }
//        else{
//            yes[i].second = (double)user[i]/(double)clear[i];
//        }
//
//    }
//
//    for(int i=1;i<=N;i++){
//        cout << yes[i].first << " " << yes[i].second << endl;
//    }
//
//    sort(yes.begin() + 1, yes.begin()+N+1, compare);
//
//    for(int i=1;i<=N;i++){
//        answer.push_back(yes[i].first);
//    }
//
//    return answer;
//}
