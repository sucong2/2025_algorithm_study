#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for(int i = 0; i < str_list.size(); i++){
      // string::npos란 -1 값을 가지는 상수로 find() 함수 수행 시에 찾는 문자열이 없을 때 반환된다.
        if(str_list[i].find(ex) == string::npos)
            answer += str_list[i];
    }
    return answer;
}

