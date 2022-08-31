#include <iostream>
#include "src/type/writer.cpp"

int main(){
    writer *wrt = new writer("test.dat");
    wrt->write("caca");
    wrt->write("tss");
    std::cout << "done !";
    return 0;
}