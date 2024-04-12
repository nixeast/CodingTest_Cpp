#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string temp = "";
    
    for(int i=0 ; i < my_string.size() ; i++)
    {
        temp = "";
        for(int j=0; j <= i; j++)
        {
            temp.push_back(my_string[j]);
            
        }
        //printf("%s\n",temp.c_str());
        if(temp == is_prefix)
        {
            answer = 1;
            return 1;
        }
            
    }
    
    return answer;
}