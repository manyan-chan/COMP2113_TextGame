FLAGS = -pedantic-errors -std=c++11

game: main.o gameengine.o
	g++ ${FLAGS} $^ -o $@


main.o:	main.cpp 
	g++ ${FLAGS} -c $<

gameengine.o: gameengine.cpp 
	g++ ${FLAGS} -c $<


clean:
		rm -f *.o game

.PHONY: clean

