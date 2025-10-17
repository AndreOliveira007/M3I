// Livro.hpp
#include <iostream>
#pragma once
#include <string>
#include <stdexcept>

using namespace std;

class Livro {
string titulo, autor, isbn;
bool disponivel {true};

public:
Livro(const string& t, const string& a, const
string& i);

const string& getTitulo() const; void setTitulo(const
string& t);

const string& getAutor() const; void setAutor(const
string& a);

const string& getIsbn() const; void setIsbn(const
string& i);

bool isDisponivel() const; void
setDisponivel(bool d);
string toString() const;
};

void Livro::setAutor(const string& a){

}

const string& getAutor(){

}

int main(){

    Livro a;
    p1.setAutor("marcos");

    cout << "nome: " << getAutor() << endl;


return 0;
}
