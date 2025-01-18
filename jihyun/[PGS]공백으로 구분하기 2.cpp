#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string str = "";
    for(int i = 0; i < my_string.length(); i++){
        if(my_string[i] != ' '){
            str += my_string[i];
        }else{
            if(str != ""){
            answer.push_back(str);
            str = "";
            }
        }
    }
    if(str != "") answer.push_back(str);
    return answer;
}