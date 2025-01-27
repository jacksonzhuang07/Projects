A3:	main.o Runner.o MoveBehaviour.o Race.o Array.o View.o Position.o
	g++ -o A3 main.o Runner.o MoveBehaviour.o Race.o Array.o View.o Position.o

main.o:	main.cc Race.h
	g++ -c main.cc

Array.o:	Array.cc Array.h  Runner.h
	g++ -c Array.cc

MoveBehaviour.o:	MoveBehaviour.cc MoveBehaviour.h Position.h
	g++ -c MoveBehaviour.cc

Position.o: Position.cc Position.h
	g++ -c Position.cc

Race.o: Race.cc Race.h Position.h View.h Array.h
	g++ -c Race.cc

Runner.o:	Runner.cc Runner.h MoveBehaviour.h Position.h
	g++ -c Runner.cc

View.o:	View.cc View.h
	g++ -c View.cc

clean:
	rm -f *.o A3
