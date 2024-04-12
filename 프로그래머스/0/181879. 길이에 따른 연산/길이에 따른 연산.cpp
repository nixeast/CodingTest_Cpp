#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    //리스트의 길이가 11이상 > 모든원소의합
    //길이가 10 이하이면 모든 원소의곱
    
    int len_list = num_list.size();
    
    if(len_list >= 11)
    {
        for(int i=0 ; i < len_list ; i++)
        {
            answer = answer + num_list[i];
        }
    }
    else
    {
        answer = 1;
        for(int i=0 ; i < len_list ; i++)
        {
            answer = answer * num_list[i];
        }
    }
    
    return answer;
}