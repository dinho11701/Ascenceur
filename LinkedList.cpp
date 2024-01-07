#include "LinkedList.h"

void LinkedList::add(int value){

   Node* newNode = new Node(value);
   
   if(head == nullptr){
      head = newNode;
   }else{
   
      Node* current = head;
      
      while(current->next != nullptr){
      
         current = current->next;
      
      }
      
      current->next = newNode;
   
   }

}


void LinkedList::afficher(){

   Node* current = head;
   
   while(current != nullptr){
      cout << current->value << " ";
      current = current->next;
   }
   cout << endl;

}
