juego: soldado.o arquero.o escuadron.o main.o coraza.o asesinos.o
	g++ soldado.o arquero.o escuadron.o main.o coraza.o asesinos.o -o game
main.o:	main.cpp arquero.h escuadron.h soldado.h coraza.h asesinos.h
	g++ -c main.cpp
soldado.o:	soldado.cpp soldado.h
	g++ -c soldado.cpp
arquero.o:	arquero.cpp arquero.h soldado.h
	g++ -c arquero.cpp
escuadron.o:	escuadron.cpp escuadron.h soldado.h
	g++ -c escuadron.cpp
coraza.o:	coraza.cpp coraza.h soldado.h
	g++ -c coraza.cpp
asesinos.o:	asesinos.cpp asesinos.h soldado.h
	g++ -c asesinos.cpp
