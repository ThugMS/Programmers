#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

unordered_map<string, int> playCnt;
unordered_map<string, vector<pair<int, int>>> playIndex;

pair<string,int> genresInfo[101];

bool compare(pair<string, int> a,pair<string, int> b){
    return a.second > b.second;
}

bool compareInt(pair<int, int> a,pair<int, int> b){
    if(a.first == b.first)
        return a.second < b.second;
    
    return a.first > b.first;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    int genreIndex = 0;
    
    for(int i=0;i<genres.size();i++){
        if(playCnt[genres[i]] == 0){
            genresInfo[genreIndex].first = genres[i];
            genreIndex++;
        }
        
        playCnt[genres[i]] += plays[i];
        
        pair<int,int> sub;
        
        sub.first = plays[i];
        sub.second = i;
        
        playIndex[genres[i]].push_back(sub);
    }
    
    for(int i=0;i<genreIndex;i++){
        genresInfo[i].second = playCnt[genresInfo[i].first];
    }
    
    sort(genresInfo, genresInfo + genreIndex, compare);
    
    for(int i=0;i<genreIndex;i++){
        sort(playIndex[genresInfo[i].first].begin(), playIndex[genresInfo[i].first].end(), compareInt);
        
        answer.push_back(playIndex[genresInfo[i].first][0].second);
        if(playIndex[genresInfo[i].first].size() >= 2)
            answer.push_back(playIndex[genresInfo[i].first][1].second);
    }
    
    
    return answer;
}
