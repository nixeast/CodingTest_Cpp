#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    int index = 0;
    for(int i=0 ; i < index_list.size() ; i++)
    {
        index = index_list[i];
        answer.push_back(my_string[index]);
    }
    return answer;
}