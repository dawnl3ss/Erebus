#include "dat_parser.h"

dat_parser::dat_parser(std::string filename){
    this->filename = filename;
    this->file.open(filename);

    if (!this->file){
        std::cerr << "Error: file could not be opened." << std::endl;
        exit(1);
    }
}

std::string dat_parser::get_filename(){
    return this->filename;
}

void dat_parser::close(){
    this->file.close();
}