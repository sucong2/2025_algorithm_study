#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int index = -1;
    for(int i = 0; i < n_str.size(); i++){
        if(n_str[i] != '0'){
            index = i;
            break;
        }
    }
    
    answer = n_str.substr(index);
    return answer;
}