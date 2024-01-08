#include "LinkedList.h"


class Ascenceur{
   
   private:
      int etageDepart;
      int etageFinal;
      int etageMaximal = 10;
      LinkedList listeEtage;
      
   public:
      //cest letage que la personne que va appuyer qui compte
      //au départ, l'étage initial est 0
      //cet etage sera ajouté à la liste
      Ascenceur(int nouvelEtage) : etageFinal(nouvelEtage) {
         listeEtage.add(nouvelEtage);
      }
      
      void afficherEtageActuel();
      
      int deplacement();
      
      //il doit être de 0
      bool verifierEtageInitial();
      
   
   
   
};
