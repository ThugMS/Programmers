//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//    
//    sort(people.begin(), people.end());
//    
//    
//    int cnt = 0;
//    int index = 0;
//    
//    while(people.size() > index){
//        int sum = people.back();
//        
//        people.pop_back(); //가장 뒤의 값 pop
//        
//        if(people[index] + sum <= limit)
//            index++;
//        
//        
//    }
//   
//    return cnt;
//}
