#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;

    for (int i = 0; i < land.size() - 1; i++) {
        for (int j = 0; j < 4; j++) {
            int maxValue = -1;

            for (int k = 0; k < 4; k++) {
                if (k == j)
                    continue;

                maxValue = max(maxValue, land[i][k]);
            }

            land[i + 1][j] += maxValue;
        }
    }

    return max(max(land[land.size()-1][0], land[land.size() - 1][1]), max(land[land.size() - 1][2], land[land.size() - 1][3]));
}