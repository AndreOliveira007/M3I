#include <iostream>
using namespace std;

class Carro {
    
public:
    
    string nome;
    int cpf;
    
    void setNome(string _nome);
    string getNome();
    void setCpf(int _cpf);
    int getCpf();
};

void Carro::setNome(string _nome){
    nome = _nome;
}

string Carro::getNome(){
    return nome;
}

void Carro::setCpf(int _cpf){
    cpf = _cpf;
}

int Carro::getCpf(){
    return cpf;
}



int main() {

Carro p1;
string nome;

cout << "Digite seu nome: " << endl;
cin >> nome;

cout << "\n\n" << endl;

p1.setNome(nome);
p1.setCpf(nome);
    
    cout << "Nome: " << p1.getNome() << endl;
    
return 0
