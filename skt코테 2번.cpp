#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> periods, vector<vector<int>> payments, vector<int> estimates) {
    vector<int> answer;

    int add = 0, sub = 0;

    for (int i = 0; i < periods.size(); i++) {
        if (periods[i] == 23) {
            int cost = 0;
            for (int j = 1; j < payments[i].size(); j++) {
                cost += payments[i][j];
            }
            cost += estimates[i];
            if (cost >= 900000) {
                add++;
            }
        }
        else if (periods[i] >= 24) {
            if (periods[i] == 59) {
                int cost = 0;
                for (int j = 0; j < payments[i].size(); j++) {
                    cost += payments[i][j];
                }
                if (cost < 900000) {
                    int next_cost = 0;
                    for (int j = 1; j < payments[i].size(); j++) {
                        next_cost += payments[i][j];
                    }
                    next_cost += estimates[i];
                    if (next_cost >= 600000) {
                        add++;
                    }
                }
                else {
                    int next_cost = 0;
                    for (int j = 1; j < payments[i].size(); j++) {
                        next_cost += payments[i][j];
                    }
                    next_cost += estimates[i];
                    if (next_cost < 600000) {
                        sub++;
                    }
                }
            }
            else if (periods[i] >= 60) {
                int cost = 0;
                for (int j = 0; j < payments[i].size(); j++) {
                    cost += payments[i][j];
                }
                if (cost >= 600000) {
                    int next_cost = 0;
                    for (int j = 1; j < payments[i].size(); j++) {
                        next_cost += payments[i][j];
                    }
                    next_cost += estimates[i];
                    if (next_cost < 600000) {
                        sub++;
                    }
                }
                else {
                    int next_cost = 0;
                    for (int j = 1; j < payments[i].size(); j++) {
                        next_cost += payments[i][j];
                    }
                    next_cost += estimates[i];
                    if (next_cost >= 600000) {
                        add++;
                    }
                }
            }
            else {
                int cost = 0;
                for (int j = 0; j < payments[i].size(); j++) {
                    cost += payments[i][j];
                }
                if (cost < 900000) {
                    int next_cost = 0;
                    for (int j = 1; j < payments[i].size(); j++) {
                        next_cost += payments[i][j];
                    }
                    next_cost += estimates[i];
                    if (next_cost >= 900000) {
                        add++;
                    }
                }
                else {
                    int next_cost = 0;
                    for (int j = 1; j < payments[i].size(); j++) {
                        next_cost += payments[i][j];
                    }
                    next_cost += estimates[i];
                    if (next_cost < 900000) {
                        sub++;
                    }
                }
            }
        }
    }

    answer.push_back(add);
    answer.push_back(sub);

    return answer;
}
