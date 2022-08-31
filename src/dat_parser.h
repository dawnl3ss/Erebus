#ifndef EREBUS_JSON_PARSER_H
#define EREBUS_JSON_PARSER_H

#include <fstream>
#include <cstdlib>

class dat_parser {

protected:
    std::fstream file;
    std::string filename;

public:
    dat_parser(std::string filename);
    std::string get_filename();
    void close();
};

#endif