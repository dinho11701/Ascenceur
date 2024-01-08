#include "LinkedList.h"

int main(){

   LinkedList liste;
   
   liste.add(1);
   liste.add(2);
   liste.add(3);
   
   cout << "La liste contient :"<< endl;
   
   liste.afficher();
   
   cout << "La tete est :"<< liste.laTete() << endl;
   
   liste.recupererLesDerniers();
   
   cout << "Les derniers sont :"<< endl;
   
   vector<int>& derniers = liste.getLesDerniers();
   
   for(int val : derniers){
   
      cout << val << endl;
   
   }
   
   
   
   return 0;

}
