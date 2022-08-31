#include <iostream>
#include "src/type/writer.cpp"

int main(){
    writer *wrt = new writer("test.dat");
    wrt->write("test one");
    wrt->write("test two");
    wrt->close();
    std::cout << "done !";
    return 0;
}