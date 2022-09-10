#ifndef EREBUS_DAT_PARSER_H
#define EREBUS_DAT_PARSER_H

#include <vector>
#include <fstream>
#include <cstdlib>

class dat_parser {

protected:
    std::fstream w_file;
    std::ifstream r_file;
    std::string filename;
    int type;

public:
    dat_parser(std::string filename, int type);
    std::string get_filename();
    int get_type();
    void close();
};

#endif