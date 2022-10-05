//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//bool checking(string s){
//    stack<char> st;
//    
//    for(int i=0;i<s.size();i++){
//        if(s[i] == '[' || s[i] == '(' || s[i] == '{')
//            st.push(s[i]);
//        
//        else{
//            if(s[i] == ']'){
//                if(st.top() == '[')
//                    st.pop();
//                else
//                    return false;
//            }
//            else if(s[i] == ')'){
//                if(st.top() == '(')
//                    st.pop();
//                else
//                    return false;
//            }
//            else if(s[i] == '}'){
//                if(st.top() == '{')
//                    st.pop();
//                else
//                    return false;
//            }
//        }
//    }
//    
//    if(st.empty())
//        return true;
//    else
//        return false;
//}
//
//string ChangeString(string s){
//    char sub = s[0];
//    
//    for(int i=0;i<s.size()-1;i++){
//        s[i] = s[i+1];
//    }
//    s[s.size()-1] = sub;
//    
//    return s;
//}
//
//int solution(string s) {
//    int answer = 0;
//    int limit = s.size();
//    
//    for(int i=0;i<limit;i++){
//        if(checking(s))
//            answer++;
//        
//        s = ChangeString(s);
//    }
//    
//    
//    return answer;
//}
