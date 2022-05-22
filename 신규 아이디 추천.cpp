//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//bool checking(char c){
//    if((c>= 'a' && c<='z') || (c >= '0' && c <='9') || c == '-' || c == '_' || c == '.')
//        return true;
//    
//    return false;
//}
//
//string solution(string new_id) {
//   
//    string answer = "";
//    vector<char> v(new_id.size());
//    
//    for(int i=0;i<new_id.size();i++)
//        v[i] = new_id[i];
//    
//    
//    //1step
//    for(int i=0;i<v.size();i++){
//        if(v[i] >= 'A' && v[i] <='Z'){
//            v[i] += 'a'-'A';
//        }
//        //2step
//        if(!checking(v[i])){
//            v.erase(v.begin() + i);
//            i--;
//        }
//    }
//    
//    //3step
//    for(int i=0;i<v.size();i++){
//        if(i!=v.size()-1 && v[i] == '.' && v[i+1] == '.'){
//            v.erase(v.begin() + i+1);
//            i--;
//        }
//    }    cout << "okay" << endl;
//    //4step
//    for(int i=0;i<v.size();i++){
//        if((i == 0 || i ==v.size()-1) && v[i] == '.' ){
//            v.erase(v.begin() + i);
//            i--;
//        }
//    }
//    
//    if(v.empty())
//        v.push_back('a');
//    
//    if(v.size() >= 15)
//        v.erase(v.begin()+15, v.end());
//    
//    if(v[v.size()-1] == '.')
//        v.erase(v.begin()+v.size()-1);
//    
//    while(v.size()<=2){
//        char c = v[v.size()-1];
//        v.push_back(c);
//    }
//    
//    for(int i=0;i<v.size();i++){
//        answer += v[i];
//    }
//    
//    return answer;
//}
//
