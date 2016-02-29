#include<iostream>

using namespace std;

int main()
{
    int number,remainder,countt,new_number;
    countt=1;
    new_number=0;
    cin>>number;
    do
    {
        remainder=number%10;
        if(remainder%2==0)
        {
            new_number=new_number+(countt*remainder);
            countt=countt*10;
            number=number/10;
        }
        else{
            number=number/10;
        }
    }while(number/10!=0);
    if(number%2==0)
    {
        new_number=new_number+(countt*number);
        cout<<new_number<<endl;
    }
    else{
        cout<<new_number;
    }
    return 0;
}
