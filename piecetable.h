#ifndef piecetable_h
#define piecetable_h
//TODO: must use this command: g++ -c main.cpp -o main.o
#include <string>

struct Buffer
{
    const std::string buffer;
    Buffer() : buffer("") {}
    Buffer(const std::string& data) : buffer(data){}
};


class PieceTable
{
private:
    Buffer originalBuffer;
    Buffer addBuffer;
public:
    PieceTable(std::string readText);
    ~PieceTable();
};

PieceTable::PieceTable(std::string readText) : originalBuffer(readText)
{
};

#endif
