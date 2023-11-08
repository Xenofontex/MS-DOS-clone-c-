#include <iostream>
#include <string>
#include <cstdlib>

void showHelp() {
  std::cout << "Comandos disponíveis: \n";
  std::cout << "help - mostra lista de comandos disponíveis\n";
  std::cout << "clear - limpa a tela\n";
  std::cout << "exit - termina o programa\n";
  std::cout << "echo - repete a mensagem digitada\n";
}

int main() {
  std::string command;
  while (true){
    std::cout << "C:\\> "; // Imita o comando do DOS.
    std::getline(std::cin, command);
    if (command == "exit") {
      std::cout << "Saindo . . . \n";
      break; // Sai do loop do programa
    } else {
      std::cout << "Comando '" << command << "' não reconhecido! \n";     
    }
  }
  return 0;
}