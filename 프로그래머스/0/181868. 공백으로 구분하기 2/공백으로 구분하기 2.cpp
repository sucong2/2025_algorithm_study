#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string s;
    for(char c: my_string){
        if(c==' ' && s!=""){
            answer.push_back(s);
            s="";
        }
        else if(c==' '){
            s="";
        }
        else{
            s+=c;
        }
    }
    if(s!=""){
        answer.push_back(s);
    }
    return answer;
}