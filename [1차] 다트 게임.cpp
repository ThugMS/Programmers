//#include <string>
//#include <cmath>
//#include <iostream>
//
//using namespace std;
//
//int solution(string dartResult) {
//    int answer = 0;
//    
//    int index = 0;
//    int cnt = 0;
//    int point[100000];
//    
//    while(index < dartResult.length()){
//        int value = 0;
//        
//        
//        
//        if(dartResult[index+1] == '0'){
//            value = 10;
//            index += 2;
//        }
//        else{
//            value = dartResult[index] - '0';
//            index++;
//        }
//        
//        switch(dartResult[index]){
//            case 'S':
//                break;
//            
//            case 'D':
//                value = pow(value,2);
//                break;
//            
//            case 'T':
//                value = pow(value, 3);
//                break;
//                
//            default:
//                cout << "안걸림" << endl;
//                break;
//        }
//        index++;
//        
//        if(index >= dartResult.length()){
//            point[cnt] = value;
//            cnt++;
//            break;
//        }
//            
//        
//        if(dartResult[index] >= '0' && dartResult[index] <= '9'){
//            point[cnt] = value;
//            cnt++;
//            continue;
//        }
//        
//        switch(dartResult[index]){
//            case '*':
//                if(cnt != 0){
//                    point[cnt - 1] *= 2;
//                }
//                value *= 2;
//                break;
//            
//            case '#':
//                value *= -1;
//                break;
//        }
//        
//        point[cnt] = value;
//        cnt++;
//        index++;
//    }
//    
//    
//    for(int i=0;i<=cnt;i++){
//        answer += point[i];
//    }
//    
//    return answer;
//}
