#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(char c : myString){
        if(c-'l'>0){
            answer+=c;
        }
        else{
            answer += 'l';
        }
    }
    return answer;
}