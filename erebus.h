#ifndef EREBUS_EREBUS_H
#define EREBUS_EREBUS_H

#include <vector>
#include "src/type/writer.cpp"

writer* get_writer(std::string filename);
reader* get_reader(std::string filename);

#endif