#include "LinkedList.h"

int main(){

   LinkedList liste;
   
   liste.add(1);
   liste.add(2);
   liste.add(3);
   
   cout << "La liste contient :"<< endl;
   
   liste.afficher();
   
   
   return 0;

}
