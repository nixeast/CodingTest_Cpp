#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int num_lastZero = -1;
    
    for(int i=0 ; i < n_str.size() ; i++)
    {
        if(n_str[i] == '0' )
        {
            printf("i[%d]\n",i);
            num_lastZero = i;
        }
        else
        {
            break;
        }
    }
    
    for(int i=0 ; i < n_str.size() ; i++)
    {
        printf("%c ",n_str[i]);
    }
    
    printf("\n");
    
    if(num_lastZero > -1)
    {
        n_str.erase(0,num_lastZero+1);    
    }
    
    
    for(int i=0 ; i < n_str.size() ; i++)
    {
        printf("%c ",n_str[i]);
    }
    
    answer = n_str;
    
    return answer;
}