#include "reader.h"

reader::reader(std::string filename) : dat_parser(filename, 1){}

std::vector<std::string> reader::read(){
    std::string line = "";
    std::vector<std::string> content;

    if (this->r_file.is_open()){
        while (std::getline(this->r_file, line)){
            content.push_back(line);
        }
    }
    return content;
}

std::vector<std::string> reader::read_n_display(){
    std::string line = "";
    std::vector<std::string> content;

    if (this->r_file.is_open()){
        while (std::getline(this->r_file, line)){
            if (line != ""){
                content.push_back(line);
                std::cout << line << std::endl;
            }
        }
    }
    return content;
}