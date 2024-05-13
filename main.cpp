#include <iostream>
#include <SDL2/SDL.h>
#include "piecetable.h"

const int WIDTH = 1000, HEIGHT = 1000;

int main(int argc, char* argv[]){
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Textless",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    if(window == NULL){
        std::cout << "Could not create window: " << SDL_GetError() << std::endl;
        return 1;
    }
    SDL_Event windowEvent;
    char *charPtr;
    PieceTable* table = new PieceTable(charPtr);
    while(true){
        if(SDL_PollEvent(&windowEvent)){
            switch (windowEvent.type)
            {
            case SDL_QUIT:
                delete(table);
                break;
            case SDL_TEXTINPUT:
                charPtr = windowEvent.text.text;
                table->write(charPtr);
                std::cout << table->readBuffer() << '\n';
                break;
            }
        }
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}