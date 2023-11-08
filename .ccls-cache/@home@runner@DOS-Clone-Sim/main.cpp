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

void clearScreen() {
  // limpa tela do usuario.
  (void)std::system("clear");
}

void echoCommand(const std:: string& message) {
  std::cout << message << std::endl;
}


int main() {
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