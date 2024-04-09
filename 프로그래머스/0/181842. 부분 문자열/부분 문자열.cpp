#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    
    for(int i=0; i < str2.size() ; i++)
    {
        string temp;
        
        if(str2[i] == str1[0])
        {
            for(int j=i ; j < str1.size()+i ; j++)
            {
                temp.push_back(str2[j]);
            }
            printf("%s\n",temp.c_str());
            
            if(temp == str1)
            {
                printf("i:[%d]temp:[%s]\n",i,temp.c_str());
                answer=1;
                break;
            }
        }
    }
    
    return answer;
}