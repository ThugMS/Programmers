//#include <string>
//#include <vector>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//string ConvertK(int n, int k){
//    string s;
//    
//    while(1){
//        if(n == 0){
//            break;
//        }
//            
//        
//        int a = n % k;
//        n /= k;
//        s += to_string(a);
//    }
//    reverse(s.begin(), s.end());
//    
//    return s;
//}
//
//bool IsPrime(long long n){
//    if(n<2) return false;
//    
//    for(int i=2;i<=sqrt(n); i++){
//        if(n %i == 0)return false;
//    }
//    
//    return true;
//}
//
//int solution(int n, int k) {
//    int answer = 0;
//    
//    string s;
//    
//    if(k!=10)
//        s = ConvertK(n, k);
//    else
//        s = to_string(n);
//    
////    cout << s << endl;
//    
//    int start = 0;
//    int end = 0;
//    int index = 0;
//    
//    while(1){
//        if(index >= s.size())
//            break;
//        
//        if(s[index] == '0'){
//            index++;
//            continue;
//        }
//        
//        start = index;
//        
//        for(int i=index;i<s.size();i++){
//            if (s[i] == '0') {
//                end = i-1;
//                index = end + 1;
//                break;
//            }
//            if(i == s.size() - 1){
//                end = s.size()-1;
//                index = end + 1;
//                break;
//            }
//        }
//        
//        string part;
//        
//        try{
//            part = s.substr(start, end - start + 1);
//        } catch(out_of_range& e){
//            cout << "범위 밖" << endl;
//        }
//        
//        long long partNum = stoi(part);
//        
//        cout << partNum << endl;
//        
//        if(IsPrime(partNum)){
//            answer++;
//        }
//    }
//    
//    return answer;
//}
