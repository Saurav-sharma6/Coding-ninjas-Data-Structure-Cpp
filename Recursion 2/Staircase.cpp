int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n<0) //plane surface
    {
        return 0;
    }
    if(n==0)  //Assume hypothesis 
    {
        return 1;
    }
    int x=staircase(n-1);
    int y=staircase(n-2);
    int z=staircase(n-3);
    return x+y+z;
    
    
}

#include <iostream>

using namespace std;

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
