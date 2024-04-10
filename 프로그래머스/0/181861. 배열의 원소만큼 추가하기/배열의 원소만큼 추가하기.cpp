#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int num=0;
    for(int i=0 ; i < arr.size() ; i++)
    {
        num = arr[i];
        for(int j=0 ; j < num ; j++)
        {
            answer.push_back(num);
        }
    }
    
    return answer;
}