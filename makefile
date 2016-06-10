juego: soldado.o Arquero.o escuadron.o Main.o
	g++ soldado.o Arquero.o escuadron.o Main.o -o game
Main.o:	Main.cpp Arquero.h escuadron.h soldado.h
	g++ -c Main.cpp
soldado.o:	soldado.cpp soldado.h
	g++ -c soldado.cpp
Arquero.o:	Arquero.cpp Arquero.h soldado.h
	g++ -c Arquero.cpp
escuadron.o:	escuadron.cpp escuadron.h
	g++ -c escuadron.cpp
coraza.o:	coraza.cpp coraza.h soldado.h
	g++ -c coraza.cpp
asesino.o:	asesinos.cpp asesinos.h soldado.h
	g++ -c asesinos.cpp
