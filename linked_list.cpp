#include<iostream>

using namespace std;

class node
{
private:
    int data;
    node *next,*previous;
    node *head,*tail;
    node *pointerr,*temprary,*chumma;
public:
    node()
    {
        head=NULL;
    }

    int newlist(int x)
    {
        if(head!=NULL)
        {
            pointerr=new node();
            pointerr->data=x;
            pointerr->next=NULL;
            pointerr->previous=temprary;
            temprary->next=pointerr;
            tail=pointerr;
            temprary=pointerr;
            return 1;
        }
        else{
            pointerr=new node();
            pointerr->data=x;
            pointerr->next=NULL;
            pointerr->previous=NULL;
            head=pointerr;
            temprary=pointerr;
            return 1;
    }
        }

        int inser_data_head(int x)
        {
                    pointerr=new node();
                    pointerr->data=x;
                    pointerr->previous=NULL;
                    pointerr->next=head;
                    head->previous=pointerr;
                    head=pointerr;
                    return 1;
        }
                int inser_data_mid(int x,int sdata)
                {
                        int flag;
                    flag=0;
                    chumma=new node();
                    chumma->data=x;
                    for(temprary=head;temprary->next!=NULL;temprary=temprary->next)
                    {
                        if(temprary->data==sdata)
                        {
                            pointerr=temprary->next;
                            pointerr->previous=chumma;
                            chumma->next=pointerr;
                            temprary->next=chumma;
                            chumma->previous=temprary;
                            flag=1;
                            return 1;
                        }
                    }
                    if(flag==0){
                            return -1;
                        }

                    }

                int inser_data_tail(int x)
                {
                    pointerr=new node();
                    pointerr->data=x;
                    pointerr->next=NULL;
                    pointerr->previous=tail;
                    tail->next=pointerr;
                    tail=pointerr;
                    return 1;
                }

        int dlt(int x)
        {
            int flag;
            flag=0;
            for(temprary=head;temprary->next!=NULL;temprary=temprary->next)
            {
                if(temprary->data==x)
                {
                    pointerr=temprary->previous;
                    chumma=temprary->next;
                    pointerr->next=chumma;
                    chumma->previous=pointerr;
                    flag=1;
                    return 1;
                }
            }
            if(flag!=1)
            {
                return -1;
            }
        }
        int dlthd()
        {
            head=head->next;
            head->previous=NULL;
            return 1;
        }
        int dltlst()
        {
            tail=tail->previous;
            tail->next=NULL;
            return 1;
        }

        int srch(int sdata)
        {
            int cnt,flg;
            cnt=0,flg=0;
            for(temprary=head;temprary->next!=NULL;temprary=temprary->next)
            {
                cnt++;
                if(temprary->data==sdata)
                {
                    flg=1;
                    return cnt;
                    break;
                }
            }
            if(flg!=1)
            {
                return -1;
            }
        }

        int display_from_begin()
        {
                for(temprary=head;temprary->next!=NULL;temprary=temprary->next)
                {
                    cout<<temprary->data<<"\n";
                }
                 cout<<temprary->data<<"\n";
                 return 1;
        }
        int display_from_last()
        {
            for(temprary=tail;temprary->previous!=NULL;temprary=temprary->previous)
                {
                    cout<<temprary->data<<"\n";
                }
                 cout<<temprary->data<<"\n";
                 return 1;
        }
};
int main()
{
    int ch,x,ch1,retrn_value,sdata;
    node Listt;
    cout<<"Linked List \n";
    do
    {
        cout<<"\n\n"<<"Enter your choice \n";
        cout<<"1.Add data to list \n";
        cout<<"2.Insert data \n";
        cout<<"3.Delete data \n";
        cout<<"4.Search data \n";
        cout<<"5.Display list \n";
        cout<<"6.Exit \n\n\n";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the data : \n";
            cin>>x;
            retrn_value=Listt.newlist(x);
            if(retrn_value==1)
            {
                cout<<"Data added.\n";
                break;
            }
            else{
                cout<<"Error in code.";
                break;
            }
            break;
        case 2:
                cout<<"Enter the data : \n";
                cin>>x;
                cout<<"Where do you want to insert the data : \n";
                cout<<"1.At the head \n";
                cout<<"2.At the middle \n";
                cout<<"3.At the end \n";
                cin>>ch1;
                switch(ch1)
                {
                case 1:
                        retrn_value=Listt.inser_data_head(x);
                        if(retrn_value==1)
                        {
                            cout<<"Data inserted Sucsessfully.";
                            break;
                        }
                        else
                        {
                            cout<<"Error in code.";
                        }
                case 2:
                        cout<<"After which data you want to insert this node : \n";
                        cin>>sdata;
                        retrn_value=Listt.inser_data_mid(x,sdata);
                        if(retrn_value==1)
                        {
                            cout<<"Data inserted Sucsessfully.";
                            break;
                        }
                        else
                        {
                            cout<<"Error in code.";
                        }
                case 3:
                    retrn_value=Listt.inser_data_tail(x);
                    if(retrn_value==1)
                    {
                        cout<<"Data inserted Sucsessfully.";
                        break;
                    }
                    else
                    {
                        cout<<"Error in code.";
                    }
                default:
                    cout<<"Invalid option \n";
                    break;
                }
            break;
        case 3:
            cout<<"Which data node do you wish to delete : \n";
            cout<<"1.At first \n";
            cout<<"2.At middle \n";
            cout<<"3.At last \n";
            cin>>ch1;
            switch(ch1)
            {
            case 1:
                retrn_value=Listt.dlthd();
                if(retrn_value==1)
                {
                    cout<<"Data Deleted. \n";
                }
                else{
                    cout<<"Error in code \n";
                }
                break;
            case 2:
                cout<<"Enter the data to be deleted : \n";
                cin>>x;
                retrn_value=Listt.dlt(x);
                if(retrn_value==1)
                {
                    cout<<"Data Deleted.\n";
                    break;
                }
                else{
                    cout<<"Data not found in the list.";
                    break;
                }
                break;
            case 3:
                retrn_value=Listt.dltlst();
                if(retrn_value==1)
                {
                    cout<<"Data Deleted. \n";
                    break;
                }
                else{
                    cout<<"Error in code \n";
                    break;
                }
                break;
            default:
                cout<<"Invalid option \n";
                break;
            }
            break;
        case 4:
            cout<<"Enter the data to be searched : \n";
            cin>>x;
            retrn_value=Listt.srch(x);
            if(retrn_value==-1)
            {
                cout<<x<<" was NOT FOUND in the list";
                break;
            }
            else{
                cout<<x<<" was FOUND in the "<<retrn_value<<" position of the list";
                break;
            }
            break;
        case 5:
            cout<<"How do you want to display the list\n";
            cout<<"1.From the beginning \n";
            cout<<"2.From the last \n";
            cin>>ch1;
            switch(ch1)
            {
            case 1:
                retrn_value=Listt.display_from_begin();
            if(retrn_value==1)
            {
               break;
            }
            else{
                cout<<"Error in code \n";
                break;
            }
            case 2:
                retrn_value=Listt.display_from_last();
            if(retrn_value==1)
            {
               break;
            }
            else{
                cout<<"Error in code \n";
                break;
            }
            default:
                cout<<"Invalid option \n";
                break;
            }
            break;
        case 6:
            break;
        }
    }while(ch<6);
    return 0;
}
