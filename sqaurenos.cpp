#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int number;
    vector<int> even;
    vector<int> odd;
    cin>>number;
    for(int i=number;i>0;i--)
    {
        if(i%2==0)
        {
            even.push_back(i*i);
        }
        else{
            odd.push_back(i*i);
        }
    }
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd[i]<<",";
    }
    for(int i=even.size()-1;i>=0;i--)
    {
        cout<<even[i]<<",";
    }
    cout<<"\b";
    return 0;
}
