#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    int count_space = 0;
    int num_answer = 0;
    int j = -1;
    
    //answer.insert(answer.begin(), "");
    
    for(int i=0 ; i < my_string.size() ; i++)
    {
        if(my_string[i] != ' ')
        {
            if(my_string[i-1] == ' ')
            {
                //printf("i:%d\n",i);
                
                j++;
                
                answer.insert(answer.begin() + j, "");
            }
            
            if(i==0)
            {
                j++;
                
                answer.insert(answer.begin() + j, "");
            }
            
            answer[j] += my_string[i];
        }
    }
    
    return answer;
}