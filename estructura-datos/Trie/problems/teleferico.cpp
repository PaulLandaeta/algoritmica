#include <bits/stdc++.h> 

using namespace std; 

struct node {
    char currentCharacter;              
    struct node *children[27];  // [null,null,null,......,null]
    // Constructor
    node() {
    }
};

struct node *trie; 

// Inicializar 
void init() {
    trie = new node();  // Instanciar el objeto trie
}

// Agregar una ruta al Trie
void insertRoute(string route) {
    node *currentNode = trie;
    for (int i = 0; i < route.length(); i++) {
        int character = route[i] - 'a';
        if (currentNode->children[character] == NULL) {
            currentNode->children[character] = new node();
        }
        // Mover el puntero al nodo hijo
        currentNode = currentNode->children[character];
        currentNode->currentCharacter = route[i];
    }
}

// Consultar si existe una ruta entre dos estaciones
bool queryRoute(string route) {
    node *currentNode = trie;
    for (int i = 0; i < route.length(); i++) {
        int character = route[i] - 'a';
        if (currentNode->children[character] == NULL) {
            return false;
        }
        currentNode = currentNode->children[character];
    }
    // porque llegamos al destino.
    return true;
}

// Función auxiliar para listar rutas desde un nodo dado
void listRoutesFromNode(node *currentNode, string currentRoute) {
    if (currentNode->endOfWord) {
        cout << currentRoute << endl;
    }
    for (int i = 0; i < 27; i++) {
        if (currentNode->children[i] != NULL) {
            char nextChar = currentNode->children[i]->currentCharacter;
            listRoutesFromNode(currentNode->children[i], currentRoute + nextChar);
        }
    }
}

// Obtener una lista de rutas que comienzan con un prefijo dado
void listRoutesWithPrefix(string prefix) {
    node *currentNode = trie;
    for (int i = 0; i < prefix.length(); i++) {
        int character = prefix[i] - 'a';
        if (currentNode->children[character] == NULL) {
            cout << "No hay rutas con ese prefijo." << endl;
            return;
        }
        currentNode = currentNode->children[character];
    }
    // Llamar a una función recursiva para listar todas las rutas con el prefijo
    listRoutesFromNode(currentNode, prefix);
}

// Función auxiliar para verificar si un nodo tiene hijos no nulos
bool hasChildren(node *currentNode) {
    for (int i = 0; i < 27; i++) {
        if (currentNode->children[i] != NULL) {
            return true;
        }
    }
    return false;
}

// Función auxiliar para eliminar una ruta de teleférico
// bcd
bool deleteRoute(node *currentNode, string route, int index) {
    // Caso base: Se ha recorrido toda la ruta
    if (index == route.length()) {
        // Si el nodo actual representa el fin de una ruta, lo marcamos como no fin de palabra
        if (currentNode->endOfWord) {
            currentNode->endOfWord = false;
            // Si el nodo actual no tiene otros hijos, se puede eliminar
            return !hasChildren(currentNode);
        }
        return false;
    }

    int character = route[index] - 'a';
    // b - a = 98-97 = 1  
    if (currentNode->children[character] == NULL) {
        // La ruta no existe en el Trie, no hay nada que eliminar
        return false;
    }

    // Llamada recursiva para eliminar la ruta restante
    bool shouldDeleteChild = deleteRoute(currentNode->children[character], route, index + 1);

    if (shouldDeleteChild) {
        // Si el nodo hijo debe eliminarse, eliminamos la referencia al hijo y verificamos si el nodo actual también es candidato para eliminarse
        delete currentNode->children[character];
        currentNode->children[character] = NULL;
        return !hasChildren(currentNode) && !currentNode->endOfWord;
    }

    return false;
}

// Función pública para eliminar una ruta de teleférico
void deleteRoute(string route) {
    // bcd
    // deleteRoute(trie, "bcd", "b")
    deleteRoute(trie, route, 0);
}



int main() {
    init();
    insertRoute("abc");
    insertRoute("bcd");
    insertRoute("de");
    
    string origin = "ab";
    
    if (queryRoute(origin)) {
        cout << "Sí, hay una ruta de " << origin << endl;
    }
    deleteRoute("bcd");
    string prefix = "b";
    cout << "Rutas que comienzan con '" << prefix << "':" << endl;
    listRoutesWithPrefix(prefix);
    
    return 0;
}
