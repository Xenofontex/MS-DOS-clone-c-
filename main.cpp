#include <iostream>
#include <string>

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