FLAGS = -pedantic-errors -std=c++11

game: main.o displaybackground.o
	g++ ${FLAGS} $^ -o $@

display_background.o:	displaybackground.cpp displaybackground.h
	g++ ${FLAGS} -c $<

main.o:	main.cpp displaybackground.h
	g++ ${FLAGS} -c $<

clean:
		rm -f *.o game

.PHONY: clean
