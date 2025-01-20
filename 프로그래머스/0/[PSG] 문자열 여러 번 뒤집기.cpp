#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    char temp;
    for(vector<int> v: queries){
        for(int i=v[0];i<=(v[0]+v[1])/2;i++){
            temp = answer[i];
            answer[i]=answer[v[0]+v[1]-i];
            answer[v[0]+v[1]-i]=temp;
        }
    }
    return answer;
}
