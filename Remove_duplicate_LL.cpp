#include<iostream>
#include<list>

using namespace std;


int main()
{
    int choice,data;
    list<int> singly_ll;
    do
    {
        cout<<"Enter your choice : "<<endl;
        cout<<"1.Add elements to the list"<<endl;
        cout<<"2.Remove duplicates from the list"<<endl;
        cout<<"3.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
                cout<<"Enter the data : "<<endl;
                cin>>data;
                singly_ll.push_back(data);
                break;
        case 2:
            singly_ll.sort();
            singly_ll.unique();
            for(list<int>::iterator list_itrator=singly_ll.begin();list_itrator!=singly_ll.end();list_itrator++)
            {
                cout<<*list_itrator<<endl;
            }
            break;
        case 3:
            break;
        default:
            cout<<"Tnvalid output"<<endl;
            break;
        }
    }while(choice<3);
    return 0;
}
