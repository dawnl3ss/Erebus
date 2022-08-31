#ifndef EREBUS_WRITER_H
#define EREBUS_WRITER_H

#include "../dat_parser.cpp"

class writer : public dat_parser {

public:
    writer(std::string filename);
    void write(std::string data);
};

#endif
