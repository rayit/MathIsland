#include <SDL2/SDL.h>

#include <iostream>
#include "include/greeting.h"

int main(int argc, char* argv[])
{
  // Initialize SDL2
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
    return -1;
  }

  // Create a window
  SDL_Window* window = SDL_CreateWindow(
      "Math Island",
      SDL_WINDOWPOS_UNDEFINED,
      SDL_WINDOWPOS_UNDEFINED,
      800,
      600,
      SDL_WINDOW_SHOWN
  );
  
  if (window == nullptr) {
    std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
    SDL_Quit();
    return -1;
  }







  std::cout << getGreeting() << std::endl;
  return 0;

}
