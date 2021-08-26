#include <iostream>
using namespace std;

struct Node{
    int val;
    Node *next;
} *start, *newptr;

Node *create_new_node(int n){
    Node *ptr;
    ptr = new Node;
    ptr -> val = n;
    ptr -> next = NULL;
    return ptr;
}

void insert_beg(Node *np){
    Node *save;
    if(start == NULL){
        start = np;
    }else{
        save = start;
        start = np;
        np -> next = save;
    }
}

// void insert_end(Node *np){
//     if(start == NULL){
//         start = np;
//     }else{
//         Node* ptr = start;
//         while(ptr != NULL){
//             ptr = ptr -> next;
//         }
//         cout<<"\nLast: "<<ptr->val;
//         ptr -> next = np;
//         ptr = np;
//     }
// }

void display_list(Node *np){
    while(np != NULL){
        // cout<<np -> val<<"("<<np->next<<") "<<" -> ";
        cout<<np -> val<<" -> ";
        np = np -> next;
    }
    cout<<"!!\n";
}

int main(){
    start = NULL;
    int data;
    cout<<"Enter value for the new node: ";
    cin>>data;
    newptr = create_new_node(data);
    if(newptr != NULL){
        cout<<"Successfully created node.\n";
    }else{
        cout<<"Node not created.\n";
    }
    insert_beg(newptr);
    cout<<"now list is:\n";
    display_list(start);
    
    // newptr = create_new_node(7);
    // insert_beg(newptr);
    // newptr = create_new_node(5);
    // insert_beg(newptr);
    // newptr = create_new_node(3);
    // insert_beg(newptr);
    // cout<<"\nAfter several insertion list is:\n";
    // display_list(start);
    
    // newptr = create_new_node(11);
    // insert_end(newptr);
    // newptr = create_new_node(13);
    // insert_end(newptr);
    
    // cout<<"\nAfter inserting at end:\n";
    // display_list(start);
}
