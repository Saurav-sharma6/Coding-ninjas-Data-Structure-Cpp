#include<bits/stdc++.h>
using namespace std;
    int subtractProductAndSum(int n) {
        int copy1 = n;
        int copy2 = n;

        int sum = 0;
        int prod = 1;

        while(copy1!=0){
            sum = sum+copy1%10;
            copy1 = copy1/10;
        }
        cout<<"Copy1 "<<sum<<endl;
        while(copy2!=0){
            prod = prod*copy2%10;
            copy2 = copy2/10;
        }
        cout<<"Copy2 "<<prod;
          

        return prod-sum;



        
    }

    int main()
{
    int n;
    cin>>n;
    cout<<subtractProductAndSum(n);

}