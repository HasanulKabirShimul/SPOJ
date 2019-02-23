#include<iostream>
#include<ctype.h>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    int T,i,len;
    cin>>T;
    char string[400];
    stack <char> shimul;
    while(T--)
    {
        cin>>string;
        len = strlen(string);
        for(i=0;i<len;i++)
        {
            if(isalpha(string[i]))
            {
                cout<<string[i];
            }
            else if(string[i]==')')
            {
                cout<<shimul.top();
                shimul.pop();
            }
            else if(string[i]!='(')
                        shimul.push(string[i]);
        }

    cout<<endl;
    }
}

