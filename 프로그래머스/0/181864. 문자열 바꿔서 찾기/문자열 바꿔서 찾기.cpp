#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    bool isMatched = 0;
    
    for(int i=0 ; i < myString.length() ; i++)
    {
        if(myString[i] == 'A')
        {
            myString[i] = 'B';
        }else
        {
            myString[i] = 'A';
        }
    }
    
    int temp = 0;
    for(int i=0 ; i < myString.length() ; i++)
    {
        if(myString[i] == pat[0])
        {
            temp = i;
            for(int j=0 ; j < pat.length() ; j++)
            {
                if(pat[j] != myString[temp])
                {
                    //no match..
                    break;
                }
                
                if(j == pat.length()-1)
                {
                    isMatched = 1;
                    answer = isMatched;
                    return answer;
                }
                
                temp++;
            }
        }
    }
    
    return answer;
}