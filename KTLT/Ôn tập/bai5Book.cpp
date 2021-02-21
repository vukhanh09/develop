#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


typedef struct Book{
      char*id;
      char*name;
      int totalPages;
      Book*next;
};
Book* createNewNode(){
      Book *newNode = new Book;
      cout<<"id: ";
      char *id = new char[50];
      char *name = new char[50];
      int pages;
      cin>>id;
      cout<<"name: ";
      cin>>name;
      cout<<"pages: ";
      cin>>pages;
      cin.ignore();

      newNode->id = id;
      newNode->name = name;
      newNode->totalPages = pages;
      newNode->next= NULL;
      return newNode;
}
void insertBook(Book * &head,Book *&last){
      if(head==NULL){
            head = createNewNode();
            last = head;
      }
      else{
            Book *newNode = createNewNode();
            last->next=newNode;
            last =  newNode;
      }
}
void deleteBook(Book * &head,Book *&last){
      int pages = 50;
      Book*curr = head;
      Book*pre = NULL;

      while(curr->totalPages<50){
            Book *node = curr->next;
            delete curr;
            head = node;
            curr = head;
      }

      for(curr=head;curr!=NULL;curr=curr->next){
            if(curr->totalPages<50){
                  pre->next=curr->next;
                  delete curr;
                  curr = pre;
            }
            pre = curr;
      }
      for(curr=head;curr!=NULL;curr=curr->next){
            if(curr->next==NULL){
                  last=curr;
            }
      }
}
void PrintBook(Book * head){
      cout<<"\nIn ds\n";
      for(Book *node=head;node!=NULL;node=node->next){
            cout<<node->id<<endl;
            cout<<node->name<<endl;
            cout<<node->totalPages<<endl;
      }
      cout<<"\n";
}
void changeBook(Book * &head,Book *&last){
      char*id = new char[50];
      cout<<"nhap id:";
      cin>>id;
      cout<<"nhap name:";
      char*name = new char[50];
      cin>>name;
      int p=0;
      for(Book *node=head;node!=NULL;node=node->next){
            if(strcmp(node->id,id)==0){
                  p++;
                  node->name= name;
            }
      }
      if(p!=0){
            cout<<"doi thanh cong\n";
      }
      else{
            cout<<"khong thanh cong\n";
      }
}

void Sort(Book *&head,Book*&last){
      Book *tmp=new Book;
      tmp->id=new char[50];
      tmp->name=new char[50];
      for(Book*node1 =head;node1!=NULL;node1=node1->next){
            for(Book*node2=node1->next;node2!=NULL;node2=node2->next){
                  if(node2->totalPages>node1->totalPages){
                        tmp->id=node1->id;
                        tmp->totalPages=node1->totalPages;
                        tmp->name=node1->name;

                        node1->id=node2->id;
                        node1->totalPages=node2->totalPages;
                        node1->name=node2->name;
                        
                        node2->id=tmp->id;
                        node2->totalPages=tmp->totalPages;
                        node2->name=tmp->name;
                  }
            }

      }

      for(Book*curr=head;curr!=NULL;curr=curr->next){
            if(curr->next==NULL){
                  last=curr;
            }
      }
}



int main(){
      Book *head=NULL,*last =NULL;
      bool flag=true;
      while(flag){
            int n;
            cin>>n;
            cin.ignore();
            switch (n)
            {
            case 1:insertBook(head,last);
                  break;
            case 4:PrintBook(head);
                  break;
            case 2:deleteBook(head,last);
                  break;
            case 3: changeBook(head,last);
                  break;
            case 5: Sort(head,last);
                  break;
            default:
                  flag=false;
                  break;
            }
      }

      // string s;
      // cin>>s;
      // int len = s.length();
      // char*name = new char[len];

      //  strcpy(name,s.c_str());
      //  cout<<name;
}