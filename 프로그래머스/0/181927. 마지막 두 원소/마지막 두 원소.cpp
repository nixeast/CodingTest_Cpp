#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int last = num_list[num_list.size()-1];
    int beforeLast = num_list[num_list.size()-2];
    if(last > beforeLast)
    {
        answer = num_list;
        answer.push_back(last - beforeLast);
    }
    else
    {
        answer = num_list;
        answer.push_back(last * 2);
    }
    return answer;
}