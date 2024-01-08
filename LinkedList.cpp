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


int LinkedList::laTete(){

   return (head->value);
}


void LinkedList::recupererLesDerniers(){

   //on vide pour stock de new valeurs
   lesDerniers.clear();

   Node* avantDernier = head;
   Node* dernier = head->next;
   
   while(dernier->next != nullptr){
      
      avantDernier = avantDernier->next;
      dernier = dernier->next;
      
   }
   
   lesDerniers.push_back(avantDernier->value);
   lesDerniers.push_back(dernier->value);

}

vector<int>& LinkedList::getLesDerniers(){
   return lesDerniers;
}



