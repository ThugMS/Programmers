//#include <string>
//#include <vector>
//#include <cmath>
//#include <iostream>
//
//
//using namespace std;
//
//long long solution(int n, vector<int> works) {
//    long long answer = 0;
//    
//    int workValue[20001] = {0,};
//    bool isDone[20001] = {false, };
//    long long sum = 0;
//    
//    for(int i : works){
//        sum += i;
//    }
//    
//    sum -= n;
//    
//    if(sum <= 0)
//        return 0;
//    
//    int _length = works.size();
//    int m_size = works.size();
//    
//    long long value = sum / works.size();
//    long long remain = sum % works.size();
//    
//    for(int i=0;i<_length;i++){
//        if(works[i] <= value){
//            isDone[i] = true;
//            remain += (value - works[i]);
//            m_size--;
//            workValue[i] = works[i];
//            continue;
//        }
//        
//        workValue[i] += value;
//    }
//    
//    value = remain / m_size;
//    remain = remain % m_size;
//    
//    while(!(value == 0)){
//        
//        for(int i=0;i<_length;i++){
//            if(isDone[i])
//                continue;
//            
//            if(works[i] <= workValue[i] + value){
//                isDone[i] = true;
//                remain += (value + workValue[i] - works[i]);
//                m_size--;
//                workValue[i] = works[i];
//                continue;
//            }
//            
//            workValue[i] += value;
//        }
//        
//        
//        value = remain / m_size;
//        remain = remain % m_size;
//    }
//    
//    
//    for(int i=0;i<_length;i++){
//        if(remain > 0 && !isDone[i]){
//            answer += pow((workValue[i] + 1),2);
//            remain--;
////            cout << pow((workValue[i] + 1),2) << endl;
//        }
//        else{
//            answer += pow(workValue[i], 2);
////            cout << pow((workValue[i]),2) << endl;
//        }
//            
//    }
//    
//    return answer;
//}
