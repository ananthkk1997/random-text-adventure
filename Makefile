all: game.cpp
	g++ game.cpp -o game

clean:
	$(RM) game
