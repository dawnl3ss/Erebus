#include "writer.h"
#include "reader.cpp"

writer::writer(std::string filename) : dat_parser(filename, 0){}

void writer::write(std::string data){
    reader *rd = new reader(this->filename);
    std::vector<std::string> content = rd->read();

    for (int i = 0; i < content.size(); i++){
        if (content[i] != "") this->w_file << content[i] << std::endl;
    }
    this->w_file << data << std::endl;
}