#include<iostream>

using namespace std;

class node
{
private:
    int data;
    node *head,*next,*pointer,*temporary;
public:
    node()
    {
        head=NULL;
    }
    int create_circular_LL(int user_data)
    {
        if(head==NULL)
        {
            pointer=new node();
            pointer->data=user_data;
            pointer->next=NULL;
            head=pointer;
            temporary=pointer;
            return 1;
        }
        else{
            pointer=new node();
            temporary->next=pointer;
            temporary=pointer;
            pointer->data=user_data;
            pointer->next=head;
            return 1;
        }
    }
    int check_circular_ll()
    {
        int flag;
        flag=0;
        for(temporary=head->next;temporary->next!=NULL;temporary=temporary->next)
        {
            if(temporary->next==head)
            {
                flag=1;
                return 1;
            }
        }
        if(flag==0)
        {
            return -1;
        }
    }
};

int main()
{
    int choice,user_values,user_data,return_value;
    return_value=1;
    node circular_list;
    cout<<"Circular Linked List \n";
    do
    {
        cout<<"Enter your choice : \n";
        cout<<"1.Create a circular linked list \n";
        cout<<"2.Check the created list is circular or not? \n";
        cout<<"3.Exit \n";
        cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"Enter the number of nodes you want to create in the list : \n";
        cin>>user_values;
        for(int i=1;(i<=user_values)&&(return_value==1);i++)
        {
                cout<<"Enter the data to be stored : \n";
                cin>>user_data;
                return_value=circular_list.create_circular_LL(user_data);
        }
        if(return_value!=1)
        {
            cout<<"Error in code \n";
        }
        break;
    case 2:
            return_value=circular_list.check_circular_ll();
            if(return_value==1)
            {
                cout<<"The list created is circular list \n";
                break;
            }
            else{
                cout<<"NO the list created is not a circular list \n";
                break;
            }
            break;
    case 3:
        break;
    default:
        cout<<"Invalid Option \n";
        break;
    }
    }while(choice<3);
    return 0;
}
