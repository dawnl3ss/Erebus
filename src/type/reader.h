#ifndef EREBUS_READERWRITER_H
#define EREBUS_READERWRITER_H

#include "../dat_parser.cpp"

#endif

class reader : public dat_parser {

public:
    reader(std::string filename);
    std::vector<std::string> read();
    std::vector<std::string> read_n_display();
};