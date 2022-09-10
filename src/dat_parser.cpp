#include "dat_parser.h"

dat_parser::dat_parser(std::string filename, int type){
    this->filename = filename;
    this->type = type;

    if (type == 0){
        this->w_file.open(filename);
    } else this->r_file.open(filename);

    if (!this->w_file || !this->r_file){
        std::cerr << "Error: file could not be opened." << std::endl;
        exit(1);
    }
}

std::string dat_parser::get_filename(){
    return this->filename;
}

int dat_parser::get_type(){
    return this->type;
}

void dat_parser::close(){
    if (this->type == 0){
        this->w_file.close();
    } else this->r_file.close();
}