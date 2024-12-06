//esercizio pila
#include <iostream>
#include "ListaPuntatori.cpp"  //includiamo lista puntatori che ci ha formito la prof l'altrp giorno
template <typename T>
class Pila {
private:
    ListaPuntatori<T> lista;  // Utilizzo della classe ListaPuntatori per gestire la pila

public:
    // Aggiunge un elemento di tipop elem in cima alla pila
    void push(T elem) {
        lista.inslista(elem, 1);  // Inserisce l'elemento in testa (cima della pila)
    }

    // Rimuove e restituendo l'elemento all'inizio dela pila
    T pop() {
        if (isEmpty()) {
            std::cout << "Errore: la pila è vuota." << std::endl;
            return T();  // Ritorna un valore di tipo T "vuoto" (definito dal costruttore di T)
        }

        T topElem = lista.leggilista(1);  // Legge il primo elemento seguendo l'algoritmo FIFO ovvero first in first out.
        lista.canclista(1);  //Rimuoviamo l'elemento
        return topElem;
    }

    // Restituisce l'elemento in cima alla pila senza rimuoverlo
    T top() {
        if (isEmpty()) {
            std::cout << "Errore: la pila è vuota." << std::endl;
            return T();  // Ritorna un valore di tipo T "vuoto"
        }
        return lista.leggilista(1);  // Legge l'elemento in cima alla pila
    }

    //da true se la pila è vuota, altrimenti da false
    bool isEmpty() const {
        return lista.listavuota();
    }

    // restitutisce il numero degli elementi
    int size() const {
        return lista.lunghezza();
    }
};
