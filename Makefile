all:
	g++ -I src/include -L src/lib -o main main.cpp -lmingw32 -lSDL2main -lSDL2
# To run this type in mingw32-make! Must have mingw installed!
# Afterward run the main.exe either manually, or type in 'main'!