#include "FileSystem.h"
#include <iostream>

FileSystem::FileSystem() {
  // Inicialização se necessario.
}

void FileSystem::createFile(const std::string& fileName){
  //implementação pra criar um arquivo.
  if (root.files.find(fileName) == root.files.end()) {
    root.files[fileName] = File{fileName, ""};
    std::cout << "Arquivo criado com sucesso:\n";
  } else {
    std::cout << "Arquivo já existente.\n";
  }
};

void FileSystem::listFiles() const {
  // Implementação pra listar arquivod
  if (root.files.empty()) {
    std::cout << "Nenhum arquivo encontrado.\n";
  } else {
    for (const auto& file : root.files) {
      std::cout << file.first << "\n";
    }
  }
  
}