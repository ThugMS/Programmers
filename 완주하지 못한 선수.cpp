#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> com;

    for (int i = 0; i < completion.size(); i++) {
        if (com[completion[i]] >= 1) {
            com[completion[i]]++;
        }
        else
            com[completion[i]] = 1;
    }

    for (int i = 0; i < participant.size(); i++) {
        if (com[participant[i]] >= 1) {
            com[participant[i]]--;
        }
        else if (com[participant[i]] <= 0) {
            answer += participant[i];
            break;
        }
    }

    return answer;
}