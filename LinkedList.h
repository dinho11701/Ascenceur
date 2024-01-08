#include <iostream>
using namespace std;

#include <vector>

struct Node{
   
   int value;
   Node* next;
   
   Node(int val) : value(val), next(nullptr) {}

};


class LinkedList{

   private:
      Node* head;
      vector<int> lesDerniers;
   
   
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
      
      int laTete();
      
      void recupererLesDerniers();
      
      vector<int>& getLesDerniers();
      
      

};
