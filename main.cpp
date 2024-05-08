#include <iostream>
#include <SDL2/SDL.h>
#include "piecetable.h"

const int WIDTH = 1000, HEIGHT = 1000;

int main(int argc, char* argv[]){
    std::cout << "worked";
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Textless",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    if(window == NULL){
        std::cout << "Could not create window: " << SDL_GetError() << std::endl;
        return 1;
    }
    SDL_Event windowEvent;
    while(true){
        if(SDL_PollEvent(&windowEvent)){
            if(windowEvent.type == SDL_QUIT ){
                break;
            }
        }
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    std::string testString = "hello world";
    char *charPtr;
    charPtr = &testString[0];
    std::cout << charPtr;
    PieceTable* table = new PieceTable(charPtr);
    return EXIT_SUCCESS;
}