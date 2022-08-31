#include "writer.h"

writer::writer(std::string filename) : dat_parser(filename){}

void writer::write(std::string data) {
    this->file << data << std::endl; //Write in the file
    this->file.close();
}