# Nom du fichier exécutable
EXECUTABLE := monProgramme

# Compilateur C++ 
CXX := g++

# Options de compilation
CXXFLAGS := -Wall -Wextra -std=c++11

# Fichiers source
SOURCES := main.cpp LinkedList.cpp ascenceur.cpp

# Fichiers objet correspondant aux fichiers source
OBJECTS := $(SOURCES:.cpp=.o)

# Règle par défaut
all: $(EXECUTABLE)

# Règle pour lier l'exécutable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

# Règle pour compiler les sources en objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers compilés
clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

# Règle pour exécuter le programme (optionnel)
run: $(EXECUTABLE)
	./$(EXECUTABLE)

