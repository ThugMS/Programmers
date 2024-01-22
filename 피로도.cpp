#include <string>
#include <vector>
#include<iostream>
#include<algorithm>

using namespace std;

int globalAnswer = -1;
int arrlen;

bool sortRule(vector<int> a, vector<int> b) {
    if (a[0] > b[0])
        return true;
    else if (a[0] == b[0]) {
        if (a[1] > b[1])
            return true;
    }

    return false;
}

void loop(int index, int k, vector<vector<int>> dungeons, int ans, bool isVisit[8]) {
    if (index >= arrlen)
        return;

    if (k >= dungeons[index][0]) {
        k -= dungeons[index][1];
        ans++;

        if (ans > globalAnswer)
            globalAnswer = ans;
    }

    bool visit[8];

    for (int i = 0; i < arrlen; i++) {
        visit[i] = isVisit[i];
    }

    visit[index] = true;

    for (int i = 0; i < arrlen; i++) {
        if (visit[i] == false) {
            loop(i, k, dungeons, ans, visit);
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;

    arrlen = dungeons.size();

    sort(dungeons.begin(), dungeons.end(), sortRule);

    bool isVisit[8] = { false, };

    for (int i = 0; i < arrlen; i++) {
        loop(i, k, dungeons, 0, isVisit);
    }

    return globalAnswer;
}