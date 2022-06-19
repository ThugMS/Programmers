//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int solution(string str1, string str2) {
//    int answer = 0;
//    
//    if(str1.empty() && str2.empty()){
//        return 65536;
//    }
//    
//    vector<string> v1;
//    vector<string> v2;
//    
//    for(int i=0;i<str1.length()-1;i++){
//        if(!((str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z')) || !((str1[i+1] >= 'A' && str1[i+1] <= 'Z') || (str1[i+1] >= 'a' && str1[i+1] <= 'z'))){
//            continue;
//        }
//        string sub = "";
//        char a,b;
//        
//        if(str1[i] >= 'A' && str1[i] <= 'Z'){
//            a = str1[i] + ('a'-'A');
//        }
//        else{
//            a = str1[i];
//        }
//        
//        if(str1[i+1] >= 'A' && str1[i+1] <= 'Z'){
//            b = str1[i+1] + ('a'-'A');
//        }
//        else{
//            b = str1[i+1];
//        }
//        sub += a; sub += b;
//        
//        v1.push_back(sub);
//    }
//    for(int i=0;i<str2.length()-1;i++){
//        if(!((str2[i] >= 'A' && str2[i] <= 'Z') || (str2[i] >= 'a' && str2[i] <= 'z')) || !((str2[i+1] >= 'A' && str2[i+1] <= 'Z') || (str2[i+1] >= 'a' && str2[i+1] <= 'z'))){
//            continue;
//        }
//        string sub = "";
//        char a,b;
//        
//        if(str2[i] >= 'A' && str2[i] <= 'Z'){
//            a = str2[i] + ('a'-'A');
//        }
//        else{
//            a = str2[i];
//        }
//        
//        if(str2[i+1] >= 'A' && str2[i+1] <= 'Z'){
//            b = str2[i+1] + ('a'-'A');
//        }
//        else{
//            b = str2[i+1];
//        }
//        sub += a; sub += b;
//        
//        v2.push_back(sub);
//    }
//    
//    bool visit1[1000] = {false,};
//    bool visit2[1000] = {false,};
//    
//    for(int i=0;i<v1.size();i++)
//        cout << v1[i] << " ";
//    cout << endl;
//    
//    for(int i=0;i<v2.size();i++)
//        cout << v2[i] << " ";
//    cout << endl;
//    
//    sort(v1.begin(), v1.end());
//    sort(v2.begin(), v2.end());
//    
//    for(int i=0;i<v1.size();i++)
//        cout << v1[i] << " ";
//    cout << endl;
//    
//    for(int i=0;i<v2.size();i++)
//        cout << v2[i] << " ";
//    cout << endl;
//    
//    int sum = v1.size()+v2.size();
//    int inter = 0;
//    
//    for(int i=0;i<v1.size();i++){
//        auto it = lower_bound(v2.begin(), v2.end(), v1[i]);
//        
//        if(*it == v1[i]){
//            
//            cout << *it  << " " <<  v1[i] << endl;
//            inter++;
//            v1.erase(v1.begin() + i);
//            i--;
//            v2.erase(it);
//        }
//    }
//    
//    cout << inter << " " << sum << endl;
//    
//    if(sum==0){
//        return 65536;
//    }
//    double jacard = (double)inter / ((double)sum - (double)inter);
//    
//    answer = jacard * 65536;
//    
//    return answer;
//}
