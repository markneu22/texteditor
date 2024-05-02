#ifndef piecetable_h
#define piecetable_h
//TODO: must use this command: g++ -c main.cpp -o main.o

struct Buffer
{
    const char* buffer;
    Buffer() : buffer("") {}
    Buffer(const char* data) : buffer(data){}
};


class PieceTable
{
private:
    const Buffer originalBuffer;
    Buffer addBuffer;
public:
    PieceTable(char* readText);
    ~PieceTable();
    void write();
};
PieceTable::PieceTable(char* readText) : originalBuffer(readText)
{
};
void PieceTable::write()
{
}
#endif
