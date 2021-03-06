#ifndef GRAFOS_CV_2018_1_VERTICE_H
#define GRAFOS_CV_2018_1_VERTICE_H


#include <iostream>
#include <string>
#include <list>
#include "Adjacente.h"
#include "Coloracao.h"

using namespace std;

class Adjacente;

class Vertice
{

private:
    long idVertice;
    long grau;
    double peso;
    list<Adjacente> verticesAdjacentes;
    static long contVertice;
    Coloracao corVisita;

public:
    Vertice();
    virtual ~Vertice();
    int getIdVertice();
    void setIdVertice(long _idVertice);
    list<Adjacente> getVerticesAdjacentes();
    void addVerticeAdjacente(long _idVerticeAdjacente, float _pesoAresta);
    bool removeVerticeAdjacente(long _idVertice);
    string listarAdjacentes();
    Coloracao getVisitado();
    void setCorVisita(Coloracao _corVisita);
    double getPeso() const;
    void setPeso(double peso);
    long getGrau() const;
    void reduzGrau();
};

#endif //GRAFOS_CV_2018_1_VERTICE_H
