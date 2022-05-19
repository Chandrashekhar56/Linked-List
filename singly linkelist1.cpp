#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node
{
  int data_part;
  struct Node* next_part;
};
struct Node* head_pointer=NULL;
void create_node_at_beginning(int value_of_data_part)
{
  struct Node* CreateNewNode = (struct Node*)malloc(sizeof(struct Node));
  CreateNewNode->data_part = value_of_data_part;
    if(head_pointer==NULL)
    {
            CreateNewNode->next_part =NULL;
            head_pointer=CreateNewNode;
    }
    else
    {
            CreateNewNode->next_part=head_pointer;
            head_pointer=CreateNewNode;
    }

}
void create_node_after_Given_Number(int value_of_data_part, int afterNode)
{
  struct Node* CreateNewNode = (struct Node*)malloc(sizeof(struct Node));
  CreateNewNode->data_part = value_of_data_part;
  if (head_pointer==NULL)
  {
        CreateNewNode->next_part=NULL;
        head_pointer=CreateNewNode;
  }
  else
  {
      int count1=1;
      struct Node* ptr=head_pointer;
      while(ptr->next_part!=NULL)
      {
          ptr=ptr->next_part;
          count1+=1;
      }
      if(count1<afterNode)
      {
         cout<<"Insertion not possible because there are only nodes available in list: "<<count1<<"\n";
      }
      }
      else
      {
        int count2=1;
        struct Node* temp_pointer=head_pointer;
        while(count2!=afterNode)
        {
            temp_pointer=temp_pointer->next_part;
            count2++;
        }
        CreateNewNode->next_part=temp_pointer->next_part;
        temp_pointer->next_part=CreateNewNode;
      }
  }
}
void create_node_at_End(int value_of_data_part)
{
  struct Node* CreateNewNode = (struct Node*)malloc(sizeof(struct Node));
  CreateNewNode->data_part = value_of_data_part;
  if (head_pointer== NULL)
  {
        CreateNewNode->next_part=NULL;
        head_pointer=CreateNewNode;
  }
  else
  {
      struct Node* temp_pointer=head_pointer;
      while(temp_pointer->next_part!=NULL)
      {
          temp_pointer=temp_pointer->next_part;
      }
      temp_pointer->next_part=CreateNewNode;
      CreateNewNode->next_part=NULL;
  }

}

void delete_node_at_beginning()
{
    if(head_pointer==NULL)
    {
        cout<<"empty";
    }
    else if(head_pointer->next_part==NULL)
    {
        delete(head_pointer);
    }
    else
    {
        struct Node* temp_pointer=head_pointer;
        head_pointer=head_pointer->next_part;
        delete(temp_pointer);
    }
}
void delete_Given_number_node(int afterNode)
{
  if (head_pointer==NULL)
  {
        cout<<"empty";
  }
  else if(head_pointer->next_part==NULL)
  {
     delete(head_pointer);
  }
  else
  {
      int count1=1;
      struct Node* ptr=head_pointer;
      while(ptr->next_part!=NULL)
      {
          ptr=ptr->next_part;
          count1+=1;
      }
      if(count1<afterNode)
      {
          cout<<"Deletion not possible because there are only nodes available in list: "<<count1<<"\n";
      }
      else
      {
        int count2=1;
        struct Node* temp_pointer1=head_pointer;
        struct Node* temp_pointer2;
        while(count2!=afterNode)
        {
            temp_pointer2=temp_pointer1;
            temp_pointer1=temp_pointer1->next_part;
            count2++;
        }
        temp_pointer2->next_part=temp_pointer1->next_part;
        delete(temp_pointer1);
      }
  }
}
void delete_node_at_End()
{
    if(head_pointer==NULL)
    {
        cout<<"empty";
    }
    else if(head_pointer->next_part!=NULL)
    {
        struct Node* temp_pointer1=head_pointer;
        struct Node* temp_pointer2;
        while(temp_pointer1->next_part!=NULL)
        {
            temp_pointer2=temp_pointer1;
            temp_pointer1=temp_pointer1->next_part;
        }
        temp_pointer2->next_part=NULL;
        delete(temp_pointer1);

    }
    else
    {
        delete(head_pointer);
    }

}
void display()
{
         if(head_pointer==NULL)
         {
             cout<<"empty";
         }
         else
         {
             struct Node* temp_pointer=head_pointer;
             while(temp_pointer!=NULL)
             {
                 cout<<temp_pointer->data_part<<" ";
                 temp_pointer=temp_pointer->next_part;
             }
         }
}
int main()
{
    cout<<"Inserted Element At Beginning: \n";
    create_node_at_beginning(4);display();cout<<endl;
    create_node_at_beginning(3);display();cout<<endl;
    create_node_at_beginning(2);display();cout<<endl;
    create_node_at_beginning(1);display();cout<<endl<<endl;

    cout<<"Inserted Element After GivenNode: \n";
    create_node_after_Given_Number(10,3);display();cout<<endl;
    create_node_after_Given_Number(5,2);display();cout<<endl;
    create_node_after_Given_Number(11,1);display();cout<<endl;
    create_node_after_Given_Number(20,5);display();cout<<endl<<endl;

    cout<<"Inserted Element At End: \n";
    create_node_at_End(21);display();cout<<endl;
    create_node_at_End(7);display();cout<<endl;
    create_node_at_End(8);display();cout<<endl;
    create_node_at_End(50);display();cout<<endl<<endl;

    cout<<"delete Node At Begin: \n";
    delete_node_at_beginning();display();cout<<endl;
    delete_node_at_beginning();display();cout<<endl;
    delete_node_at_beginning();display();cout<<endl<<endl;

    cout<<"delete  GivenNode: \n";
    delete_Given_number_node(4);display();cout<<endl;
    delete_Given_number_node(2);display();cout<<endl;
    delete_Given_number_node(3);display();cout<<endl<<endl;

    cout<<"delete Node At End: \n";
    delete_node_at_End();display();cout<<endl;
    delete_node_at_End();display();cout<<endl;
    delete_node_at_End();display();cout<<endl;
    delete_node_at_End();display();cout<<endl<<endl;

    cout<<"Present Elements in the list: \n";
    display();
    cout<<endl<<endl;

    cout<<"Inserted Element After GivenNode: \n";
    create_node_after_Given_Number(10,15);display();cout<<endl;
}
