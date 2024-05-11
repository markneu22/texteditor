#ifndef piecetable_h
#define piecetable_h
#include <iostream>
struct Buffer
{
    // Ugly ass temporary fix
    char* buffer;
    Buffer(){
        char huh = 'a';
        buffer = &huh;
    }
    Buffer(char* data) : buffer(data){
        std::cout << buffer;
    }
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
};
PieceTable::PieceTable(char* readText) : originalBuffer(readText)
{
};
void PieceTable::write(char* newText)
{
    // It does not crash anymore
    // But it only saves recent input
    // Must be because of C++ wizardry
    // Gotta fix ASAP
    strcat(addBuffer.buffer,newText);
}
char* PieceTable::readBuffer(){
    return addBuffer.buffer;
}
#endif
