#include<iostream>
#include<list>

using namespace std;

int main()
{
    int choice,user_data;
    list<int> singly_ll;
    cout<<"Reversing a list"<<endl;
    do
    {
        cout<<"Enter your choice"<<endl;
        cout<<"1.Add elements to the list"<<endl;
        cout<<"2.Display the elements in reverse"<<endl;
        cout<<"3.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the data : "<<endl;
            cin>>user_data;
            singly_ll.push_back(user_data);
            break;
        case 2:
            singly_ll.reverse();
            for(list<int>::iterator slist_itrator=singly_ll.begin();slist_itrator!=singly_ll.end();slist_itrator++)
            {
                cout<<*slist_itrator<<endl;
            }
            break;
        case 3:
            break;
        default:
            cout<<"Invalid option"<<endl;
            break;
        }
    }while(choice<3);
    return 0;
}
