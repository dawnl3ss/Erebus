#ifndef EREBUS_JSON_PARSER_H
#define EREBUS_JSON_PARSER_H

class dat_parser {

private:
    std::string filename;

public:
    dat_parser(std::string filename);
    std::string get_filename();
    void write(std::string data);
};

#endif