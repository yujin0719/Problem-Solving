// 가운데 글자 가져오기

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size()%2 == 0)
        answer = s.substr(s.size()/2-1,2);
    else
        answer = s[s.size()/2];
    return answer;
}
