#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    int temp = 0;
    for (vector<int> v: queries){
        temp = answer[v[0]];
        answer[v[0]]=answer[v[1]];
        answer[v[1]]=temp;
    }
    return answer;
}
