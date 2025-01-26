#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for(string str: str_list){
        if(str.length()<ex.length()){
            answer += str;
        }
        else{
            bool flag = false;
            for(int i=0;i<=str.length()-ex.length();i++){
                if(str.substr(i, ex.length())==ex){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                answer += str;
            }
        }
    }
    return answer;
}