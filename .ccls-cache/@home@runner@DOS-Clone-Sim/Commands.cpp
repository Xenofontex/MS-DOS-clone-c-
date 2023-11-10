#include "Commands.h"
#include <iostream>

void showHelp() {
  std::cout << "Comandos disponíveis: \n";
  std::cout << "help - mostra lista de comandos disponíveis\n";
  std::cout << "clear - limpa a tela\n";
  std::cout << "exit - termina o programa\n";
  std::cout << "echo - repete a mensagem digitada\n";
}

void clearScreen() {
  // limpa tela do usuario.
  (void)std::system("clear");
} 
