#include<bits/stdc++.h>
using namespace std;

    static string rremove(string s)
    {
        vector<char> newvector(s.begin(),s.end());
        stack <char> stack;
        int i=0;
        while(i<s.size())
        {
            if(!stack.empty() &&stack.top()==s[i])
            {
                while(i<s.length() && s[i]==stack.top())
                {
                    i++;
                }
                stack.pop();
            }
            if(i<s.length())
            {
            stack.push(s[i]);
            i++;
            }
        }
        vector<char> stackvector;
        while(!stack.empty())
        {
            stackvector.push_back(stack.top());
            stack.pop();
        }
        reverse(stackvector.begin(),stackvector.end());
        if(newvector==stackvector)
        {
            string now(newvector.begin(),newvector.end());
            return now;
        }
        else
        {
            string result(stackvector.begin(),stackvector.end());
            return rremove(result);

        }

    }



int main()
{
    string s="geeksforgeeks";
    cout<<" "<<rremove(s);
    return 0;
}