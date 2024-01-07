#include <iostream>
using namespace std;

struct Node{
   
   int value;
   Node* next;
   
   Node(int val) : value(val), next(nullptr) {}

};


class LinkedList{

   private:
      Node* head;
   
   
   public:
      LinkedList() : head(nullptr) {}
      
      ~LinkedList(){
      
         Node* current = head;
         
         while(current != nullptr){
         
            Node* next = current->next;
            delete current;
            current = next;
         
         }
         head = nullptr;
      
      }
      
      void add(int value);
      
      void afficher();

};
