#ifndef EREBUS_READERWRITER_H
#define EREBUS_READERWRITER_H

#include "../dat_parser.cpp"

#endif

class writer : public dat_parser {

public:
    writer(std::string filename);
    void write(std::string data);
};
