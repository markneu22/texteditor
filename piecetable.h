#ifndef piecetable_h
#define piecetable_h
#include <iostream>
struct Buffer
{
    char* buffer;
    Buffer(){}
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
    if(addBuffer.buffer){
        std::cout << "Before: " << addBuffer.buffer << '\n';
        std::cout << "Value of newText: " << newText;
        strcat(addBuffer.buffer,newText);
        std::cout << "After: " << addBuffer.buffer << '\n';
        return;
    }
    addBuffer.buffer = newText;
    return;
}
char* PieceTable::readBuffer(){
    return addBuffer.buffer;
}
#endif
