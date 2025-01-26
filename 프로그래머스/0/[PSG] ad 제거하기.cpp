#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(string s: strArr){
        bool flag = false;
        for(size_t i=0; i<s.length();  i++){
            if (s[i]=='a' && s[i+1]=='d'){
                flag = true;
            }   
        }
        if (!flag){
            answer.push_back(s);
        }
    }
    return answer;
}
