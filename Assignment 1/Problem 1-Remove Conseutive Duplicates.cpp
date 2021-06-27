#include <iostream>
using namespace std;

//function for removing consecutive duplicate characters from a string
void removeConsecutiveDuplicates(char *input) 
{
    if(input[0]=='\0')
    {
        return;
    }
    
    if(input[0]!=input[1])
    {
        removeConsecutiveDuplicates(input+1);
    }
    else
    {
        for(int i=1;input[i]!='\0';i++)
        {
            input[i]=input[i+1];
        }
        removeConsecutiveDuplicates(input);
    }
}

int main() 
{
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
