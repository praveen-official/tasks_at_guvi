#include<iostream>
#include<string>

using namespace std;

int main()
{
    string user_string;
    getline(cin,user_string);
    for(int i=0;user_string[i+1]!='\0';i=i+2)
    {
        if(user_string[i+1]==' ')
        {
            continue;
        }
        else{
            char temprory;
            temprory=user_string[i];
            user_string[i]=user_string[i+1];
            user_string[i+1]=temprory;
        }
    }
    cout<<user_string;
    return 0;
}
