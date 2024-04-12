#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    string temp = "";
    
    for(int i=0 ; i < my_string.size() ; i++)
    {
        temp = "";
        for(int j = i ; j < my_string.size() ; j++)
        {
            temp.push_back(my_string[j]);        
        }
        printf("temp:%s\n",temp.c_str());
        if(temp == is_suffix)
        {
            answer = 1;
            return answer;
        }

    }
    
    return answer;
}