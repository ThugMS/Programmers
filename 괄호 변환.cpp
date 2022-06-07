//#include <string>
//#include <vector>
//#include <stack>
//#include <iostream>
//
//using namespace std;
//
//bool  checkcorrect(string s) {
//    stack<char> st;
//    int i;
//
//    for (i = 0; i < s.length(); i++) {
//        if (s[i] == '(') {
//            st.push('(');
//        }
//        else {
//            if (st.empty())
//                return false;
//        }
//    }
//    return true;
//}
//
//
//
//string divide(string p) {
//    stack<char> st;
//    string u, v;
//    int index;
//
//    st.push(p[0]);
//
//    int i;
//    for (i = 1; i < p.length(); i++) {
//        if (st.empty()) {
//            break;
//        }
//
//        if (st.top() == p[i]) {
//            st.push(p[i]);
//        }
//        else {
//            st.pop();
//        }
//    }
//
//    u = p.substr(0, i);
//    v = p.substr(i);
//
//    if (checkcorrect(u)) {
//        string sub = "";
//
//        sub += u;
//
//        if(v.length() != 0)
//            sub += divide(v);
//
//        return sub;
//    }
//    else {
//        string sub = "(";
//        
//        if (v.length() != 0)
//            sub += divide(v);
//
//        sub += ')';
//
//        for (int i = 1; i < u.size() - 1; i++) {
//            if (u[i] == '(') {
//                sub += ')';
//            }
//            else {
//                sub += '(';
//            }
//        }
//    
//
//        return sub;
//    }
//
//}
//
//string solution(string p) {
//    string answer = "";
//
//    if (p == "")
//        return answer;
//
//    
//    answer = divide(p);
//
//
//    return answer;
//}
//
//int main() {
//    string p = "()))((()";
//    string kk = solution(p);
//    
//    cout << kk << endl;
//}