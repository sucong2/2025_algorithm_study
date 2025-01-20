#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;

    for(string str: intStrs){
        string temp;
        for(int i=s;i<s+l;i++){
            temp += str[i];
        }
        if (atoi(temp.c_str())>k){
            answer.push_back(atoi(temp.c_str()));

        }
    }
    return answer;
}
