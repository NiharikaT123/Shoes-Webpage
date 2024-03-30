#include <bits/stdc++.h>
using namespace std;
/*
class Node
{
    public:
    int data;
    Node * next;
};

Node * newNode(int data)
{
    Node* new_node= new Node();
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}

void push(Node** head_ref,int new_data)
{
    Node* new_node=newNode(new_data);

    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}*/

 void selection(int arr[],int size)
 {
    
    for(int i=0;i<size;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }

        if(min!=i)
        {
            swap(arr[min],arr[i]);
        }
    }

 }

 int main()
 {
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

 }