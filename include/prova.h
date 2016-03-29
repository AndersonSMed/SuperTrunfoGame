#include <iostream>
#include <vector>
#ifndef _PROVA_H_
#define _PROVA_H_

using namespace std;

class STCard{ // Classe responsável pelas informações da carta
public:
  STCard(string ID, string Name, string Company, string Year, string Speed, string Range, string Length, string Wingspan);
  void setTrunfo(); // Marca a carta como Super Trunfo
  bool IsST() const; // Verifica se a carta está marcada como Super Trunfo
  string GetId() const;
  string GetName() const;
  string GetCompany() const;
  int GetYear() const;
  int GetSpeed() const;
  unsigned int GetRange() const;
  float GetLength() const;
  float GetWingspan() const;

private:
  string ID;
  bool ST; // Variável responsável por identificar a carta como Super Trunfo
  string Name;
  string Company;
  string Year;
  string Speed;
  string Range;
  string Length;
  string Wingspan;
};
class STPlayer{
public:
  STPlayer(const int cards, string Name); // Construtor que define a quantidade de cartas por deck e o nome do jogador
  ~STPlayer(); // Destrutor que libera a memória do vector
  STCard getCard(const int position); // Retorna uma carta específica do deck
  int getNumCards() const; // Retorna a quantidade de cartas por deck
  void addCart(STCard card const); // Adiciona uma nova carta no deck
private:
  string Name;
  vector < STCard > Deck;
  int cards; // Define a quantidade de cartas por deck
};
class STGame{

};
#endif
