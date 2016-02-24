#include<iostream>

using namespace std;

class node
{
private:
    int data;
    node *next,*head,*last_created;
public:
    node()
    {
        head=NULL;
    }
    int create_cll(int data)
    {
        if(head==NULL)
        {
            last_created=new node();
            last_created->data=data;
            last_created->next=NULL;
            head=last_created;
            return 1;
        }
        else{
            last_created->next=new node();
            last_created=last_created->next;
            last_created->data=data;
            last_created->next=NULL;
            return 1;
        }
    }

    int check_cll()
    {
        node *first,*second;
        first=head;
        second=head->next->next;
        for(;;(first=first->next),(second=second->next->next))
        {
            cout<<first->data<<endl;
            cout<<second->data<<endl;
            if(first==second)
            {
                return 1;
            }
            else if((first->next==NULL)||(second->next==NULL)){
                    return -1;
            }
            else{
                continue;
            }
        }
    }
};

    int main()
    {
        int choice,user_value,list_length,return_value;
        node listt;
        cout<<"Checking circular LL using Tortoise and hare algorithm"<<endl;
        do
        {
            cout<<"Enter your choice :"<<endl;
            cout<<"1.Create a circular linked list"<<endl;
            cout<<"2.Check if the LL is circular or not?"<<endl;
            cout<<"3.Exit"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                cout<<"How many number of nodes you want to create in the list"<<endl;
                cin>>list_length;
                for(int i=1;i<=list_length;i++)
                {
                    cout<<"Enter the data to be stored in the node :"<<endl;
                    cin>>user_value;
                    return_value=listt.create_cll(user_value);
                }
                if(return_value!=1)
                {
                    cout<<"Error in code"<<endl;
                }
                break;
            case 2:
                return_value=listt.check_cll();
                if(return_value==1)
                {
                    cout<<"The list is circular i.e cyclic"<<endl;
                }
                else{
                    cout<<"The list is not circular."<<endl;
                }
                break;
            case 3:
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
            }
        }while(choice<3);
        return 0;
    }
