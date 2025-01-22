#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string s;
    for(char c: myString){
        if(c=='x'){
            if(s!=""){
                answer.push_back(s);
                s="";
            }
        }
        else{
            s+=c;
        }
    }
    if(s!=""){
        answer.push_back(s);
    }
    sort(answer.begin(), answer.end());
    return answer;
}