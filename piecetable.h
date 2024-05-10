#ifndef piecetable_h
#define piecetable_h

struct Buffer
{
    char* buffer;
    Buffer() : buffer() {}
    Buffer(char* data) : buffer(data){}
};


class PieceTable
{
private:
    const Buffer originalBuffer;
    Buffer addBuffer;
public:
    PieceTable(char* readText);
    void write(char* newText);
    char* readBuffer();
    ~PieceTable();
};
PieceTable::PieceTable(char* readText) : originalBuffer(readText)
{
};
void PieceTable::write(char* newText)
{
    *addBuffer.buffer += *newText;
}
char* PieceTable::readBuffer(){
    return addBuffer.buffer;
}
#endif
