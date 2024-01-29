#include <string>
#include <vector>
#include <iostream>

using namespace std;

int num1 = 0;
int num2 = 0;

vector<int> v1(10000, 0);
vector<int> v2(10000, 0);

int solution(vector<int> topping) {
    int answer = 0;

    for (int i = 0; i < topping.size(); i++) {
        if (v2[topping[i]] == 0) {
            num2++;
        }

        v2[topping[i]]++;
    }


    for (int i = 0; i < topping.size(); i++) {
        if (v1[topping[i]] == 0) {
            num1++;
        }

        v1[topping[i]]++;

        v2[topping[i]]--;

        if (v2[topping[i]] == 0) {
            num2--;
        }

        if (num1 == num2) {
            answer++;
        }

    }

    return answer;
}