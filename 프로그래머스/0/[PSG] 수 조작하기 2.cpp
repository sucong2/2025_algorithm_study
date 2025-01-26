#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for (size_t i = 1; i < numLog.size(); i++){
        int temp = numLog[i] -numLog[i-1];
        if (temp ==1){
            answer += 'w';
        }
        else if(temp ==-1){
            answer += 's';
        }
        else if(temp==10){
            answer += 'd';
            }
        else if(temp==-10){
            answer += 'a';
        }
    }
    return answer;
}
