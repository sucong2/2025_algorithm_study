#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end()); //오름차순
    if(v[0]==v[3]){
        answer = 1111*v[0];
    }
    else if(v[0]==v[2]){
        answer = pow(10*v[0]+v[3],2);
    }
    else if(v[1]==v[3]){
        answer = pow(10*v[1]+v[0],2);
    }
    else if(v[0]==v[1] && v[2]==v[3]){
        answer = (v[0] + v[2])* abs(v[0]-v[2]);
    }
    else if((v[0]-v[1])*(v[1]-v[2])*(v[2]-v[3]) !=0){
        answer = v[0];
    }
    else if(v[0]==v[1]){
        answer = v[2] * v[3];
    }
    else if(v[1]==v[2]){
        answer = v[0] * v[3];
    }
    else if(v[2]==v[3]){
        answer = v[0] * v[1];
    }
    return answer;
}
