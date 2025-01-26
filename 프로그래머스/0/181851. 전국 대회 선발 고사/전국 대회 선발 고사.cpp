#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//필터링 O(n)
//정렬 O(nlogn)
//결과계산 O(1)

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<pair<int, int>> available;
    for(int i=0;i<attendance.size();i++){
        if(attendance[i]){
            available.push_back({rank[i], i});
        }
    }
    sort(available.begin(), available.end());
    
    for(int i=0;i<3;i++){
        answer = answer*100 + available[i].second;
    }
    return answer;
}