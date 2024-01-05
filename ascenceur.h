#include<iostream>
using namespace std;



class Ascenceur{
   
   private:
      int etageDepart;
      int etageFinal;
      int deplacement;
      int etageMaximal = 10;
      
   public:
      //cest letage que la personne que va appuyer qui compte
      Ascenceur(int nouvelEtage) : etageFinal(nouvelEtage) {
      
         //car on veut que quand on appelle le constructeur
         //l'éetage depart soit letage précédemment appuyé par l'user
         //on veut as revenir à 0 
         etageDepart = etageFinal;
      }
      
      void afficherEtageActuel();
      
      int deplacement();
   
   
   
};
