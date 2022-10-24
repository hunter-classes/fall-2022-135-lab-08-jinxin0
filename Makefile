main: main.o invert.o imageio.o
	g++ -o main main.o invert.o imageio.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

main.o: main.cpp invert.h

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h imageio.h

clean:
	rm -f *.o
