#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    int length = is_prefix.length();
    if (length>my_string.length()){
        return false;
    }
    if(my_string.substr(0, length) == is_prefix){
        return true;
    }
    return false;
}
