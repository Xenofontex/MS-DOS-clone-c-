#include <iostream>
#include <string>
#include <cstdlib>
#include "FileSystem.h"
#include "Commands.h"


void echoCommand(const std:: string& message) {
  std::cout << message << std::endl;
}


int main() {
  FileSystem fs;
  std::string command;
  
  while (true){
    std::cout << "C:\\> "; // Imita o comando do DOS.
    std::getline(std::cin, command);
    if (command == "exit") {
      std::cout << "Saindo . . . \n";
      break; // Sai do loop do programa
    } else if (command == "help"){
      showHelp();
    } else if (command == "clear"){
      clearScreen();
    } else if (command.rfind("create", 0) == 0){
      std::string fileName = command.substr(7);
      fs.createFile(fileName);
    } else if(command == "list"){
      fs.listFiles();
    } else if (command.rfind("echo ", 0) == 0){// verifica se o comando comeca com echo.
      echoCommand(command.substr(5));
      //passa a funcao para o echoCommand
    } else if (command == "echo"){
      echoCommand("");
    } else {
      std::cout << "Comando '" << command << "' não reconhecido! \n";     
    }
  }
  return 0;
}