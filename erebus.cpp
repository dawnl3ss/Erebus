#include <iostream>
#include "erebus.h"

writer* get_writer(std::string filename){
    return new writer(filename);
}

reader* get_reader(std::string filename){
    return new reader(filename);
}