#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for(size_t i=0; i<code.length(); i++){
        if(code[i]=='1'){
            mode = 1 - mode;
        }
        else if((!mode && i%2==0) || (mode && i%2==1)){
            answer += code[i];
        }
    }
    if(answer==""){
        return "EMPTY";
    }
    return answer;
}
