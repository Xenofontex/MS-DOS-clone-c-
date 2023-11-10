#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <string>
#include <map>

#include "File.h"


// Estrutura pea representar um diretório
struct Directory {
    std::map<std::string, File>files;
};

class FileSystem {
private:
    Directory root;
public:
    FileSystem();
    void createFile(const std::string & fileName);
    void listFiles() const;
};

#endif