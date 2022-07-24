#include <string>
#include <vector>

using namespace std;

long long solution(vector<long long> players, int power, int k) {
    long long answer = 0;
    long long my = power;
    long long win = 1;

    long long allwin = (players.size() * (1 + players.size())) / 2;
    long long alllose = players.size() * (long long)k;

    if (alllose > allwin)return alllose + my;

    for (int i = 0; i < players.size(); i++) {
        if (my >= players[i]) {
            if (i != players.size() - 1) {
                if (my + win >= players[i + 1]) {
                    my += win;
                    win++;
                }
                else {
                    if (k > win) {
                        win = 1;
                        my += k;
                    }
                    else {
                        my += win;
                        win++;
                    }
                }
            }
            else {
                if (k > win) {
                    win = 1;
                    my += k;
                }
                else {
                    my += win;
                    win++;
                }
            }
        }
        else {
            win = 1;
            my += k;
        }
    }


    return my;
}