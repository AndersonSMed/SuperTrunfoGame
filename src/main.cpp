#include <iostream>
#include <fstream>
#include <cstdlib>
#include "prova.h"

using namespace std;

int main(int argc, char * argv[]){
  string file_name; // Armazena o nome do arquivo com as informações da carta
  int jogadores; // Armazena a quantidade de jogadores
  int cartas; // Armazena a quantidade de cartas por jogador
  if(argc > 3){
    file_name = argv[1];
    jogadores = atoi(argv[2]);
    cartas = atoi(argv[3]);
    if(jogadores < 2 || jogadores > 10){
      cout << ">>>ERROR, the number of players must be between 2 and 10!!!\n";
      return 0;
    }
    if(cartas < 1 || cartas > 20){
      cout<< ">>>ERROR, the number of cards per player must be between 1 and 20!!!\n";
      return 0;
    }
  }else{
    cout << ">>>ERROR, missing arguments!!!\n";
    return 0;
  }
  fstream file;
  try{ // Tenta abrir o arquivo
    file.open(file_name);
  }catch (fstream::failure e){ // Se não conseguir abrir o arquivo, retorne uma mensagem de falha
    cout << ">>>ERROR, file or directory not found!!!\n";
    return 0;
  }
  
}
