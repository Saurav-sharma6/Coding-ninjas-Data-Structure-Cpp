
#include<bits/stdc++.h>
bool check(char input[])
{
    if(strlen(input) == 0)
    {
        return true;
    }
    else if(input[0] == 'a' && input[1] == 'a')
    {
        return check(input+2);
        
    }
    else if(input[0] == 'a')
    {
        if(input[1] == 'b' && input[2] != 'b')
        {
            return false;
        }
        else
        {
           bool ans = check(input+2);
            if(ans == true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    
    else if(input[0] == 'b' && input[1] == 'b')
    {
        if(input[2] != 'a')
        {
            return false;
        }
        else
        {
            bool ans = check(input+2);
            if(ans == true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
    }
    
}

bool checkAB(char input[]) {
	// Write your code here
    
    if(input[0]!='a')
    {
        return false;
    }
    else
    {
        return check(input);
    }
    

}



#include <iostream>

using namespace std;

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
