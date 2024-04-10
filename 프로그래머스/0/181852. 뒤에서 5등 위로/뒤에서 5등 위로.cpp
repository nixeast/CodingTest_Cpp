#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    sort(num_list.begin(), num_list.end());
    
    for(int i=0 ; i < num_list.size() ; i++)
    {
        printf("[%d]",num_list[i]);
    }
    
    int i = 5;
    
    while(i > 0)
    {
        num_list.erase(num_list.begin());
        i--;
    }
    
    answer = num_list;
    
    return answer;
}