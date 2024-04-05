#include <string>
#include <vector>

using namespace std;

// 첫글자를 저장하고
// 비교한 글자를 검색해 나간다.
// 같은 글자와 다른글자의 수가 같을 경우 카운트를 올리고
// 해당 부분을 제거한다.
// 남은 string의 길이가 1 이하가 될 때까지 반복한다.

int solution(string s) {
    int answer = 0;
    char first = ' ';
    char other;
    int count_first = 0;
    int count_other = 0;
    int divide = 0;
    
    for(int i=0 ; i < s.length() ; i++)
    {
        if(first == ' ')
        {
            first = s[i];
            count_first = 1;   
            //printf("first is empty..first:%c\n",first);
            
            if(i + 1 == s.length())
            {
                divide++;
                break;
            }
            
        }
        else
        {
            other = s[i];
            //count_other++;
            //printf("other:%c, other_cnt:%d\n", other, count_other);
            
            if(first == other)
            {
                count_first++;
            }
            else
            {
                count_other++;    
            }
            
            //printf("i:%d, first_cnt:%d, other_cnt:%d\n", i, count_first, count_other);
            
            if(count_first == count_other)
            {
                divide++;
                first = ' ';
                count_first = 0;
                count_other = 0;
            }else
            {
                if(i + 1 == s.length())
                {
                    divide++;
                    break;
                }
            }
            
            
        }
        
    }
    
    answer = divide;
    
    return answer;
}