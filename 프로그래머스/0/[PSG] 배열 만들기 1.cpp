#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int ans = k;
    while(ans<=n){
        answer.push_back(ans);
        ans += k;
    }
    return answer;
}
