#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    
    //finished에서 마치지 못한 일의 번호를 찾는다.
    //찾은 번호의 일을 todolist에서 answer로 가져온다.
    
    for(int i=0 ; i < finished.size() ; i++)
    {
        if(finished[i] == false)
        {
            answer.push_back(todo_list[i]);
        }
    }
    
    return answer;
}