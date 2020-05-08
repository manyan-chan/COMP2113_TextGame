FLAGS = -pedantic-errors -std=c++11

game: main.o displaybackground.o gameengine.o
	g++ ${FLAGS} $^ -o $@

display_background.o: displaybackground.cpp displaybackground.h
	g++ ${FLAGS} -c $<

main.o:	main.cpp displaybackground.h
	g++ ${FLAGS} -c $<

gameengine.o: allocate_resource.h coffeeshop.h supermarket.h schoolhall.h convenientstore.h chemistrylaboratory.h lawn.h main.h gameengine.h communitymarket.h allocate_resource.cpp coffeeshop.cpp supermarket.cpp schoolhall.cpp convenientstore.cpp chemistrylaboratory.cpp lawn.cpp main.cpp gameengine.cpp communitymarket.cpp hospital.h hospital.cpp
	g++ ${FLAGS} -c $<

clean:
		rm -f *.o game

.PHONY: clean

