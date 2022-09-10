#include "erebus.cpp"

int main(){
    reader* rd = get_reader("test.dat");
    std::vector<std::string> content = rd->read_n_display();
    return 0;
}