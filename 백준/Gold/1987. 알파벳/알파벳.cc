#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define endl "\n"

using namespace std;

int R,C;
char arr[21][21];
int MAX = 0;
int alpha[26] = {0, };

void DFS(int a, int b, int ans){
    if(alpha[arr[a][b]-'A'] == 1)return;
    
    
    if(MAX < ans){
        MAX = ans;
    }
    
    alpha[arr[a][b] -'A'] = 1;
    
    if(a!=0)DFS(a-1, b, ans + 1);
    if(b!=0)DFS(a, b-1, ans + 1);
    if(a!=R-1)DFS(a+1, b, ans + 1);
    if(b!=C-1)DFS(a, b+1, ans + 1);
    
    alpha[arr[a][b] -'A'] = 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> R >> C;
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
            cin >> arr[i][j];
        getchar();
    }
    
    DFS(0,0,1);

    cout << MAX << endl;
    
    return 0;
}