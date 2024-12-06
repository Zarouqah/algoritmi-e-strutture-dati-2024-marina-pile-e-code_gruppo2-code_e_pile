// Esercizio coda

#include <iostream>
#include "ListaPuntatori.cpp"  // Richiamiamo classe lista puntatori

template <typename T>
class Coda {
private:
    ListaPuntatori<T> lista;  // Usa la ListaPuntatori per gestire la coda

public:
    // Aggiunge un elemento alla fine della coda
    void enqueue(T elem) {
        lista.inslista(elem, lista.lunghezza() + 1);  // Inserisce l'elemento alla fine della coda    }

    // Rimuove e restituisce l'elemento testa della cvoda
    T dequeue() {
        if (isEmpty()) {
            std::cout << "Errore: la coda è vuota." << std::endl;
            return T();  // restituisce il valore di tipo t        }

        T frontElem = lista.leggilista(1);  // Legge l'elemento in testa alla coda
        lista.canclista(1);  // Rimuove l'elemento in testa
        return frontElem;
    }

    // Restituisce l'elemento in testa alla coda senza rimuoverlo
    T front() {
        if (isEmpty()) {
            std::cout << "Errore: la coda è vuota." << std::endl;
            return T();  // Restituisce un valore di tipo T di default
        }
        return lista.leggilista(1);  // Legge l'elemento 
    }

    // Restituisce true se la coda è vuota, altrimenti false
    bool isEmpty() const {
        return lista.listavuota();  // Controlla se la coda è vuota
    }

    // Restituisce il numero di elementi nella coda
    int size() const {
        return lista.lunghezza();  // Restituisce la lunghezza della coda    }
};
