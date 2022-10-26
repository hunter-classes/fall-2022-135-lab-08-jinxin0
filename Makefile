main: main.o imageio.o invert.o invert_half.o box.o
	g++ -o main main.o imageio.o invert.o invert_half.o box.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

main.o: main.cpp invert.h invert_half.h

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp invert.h imageio.h

invert_half.o: invert_half.cpp invert_half.h imageio.h

box.o: box.cpp box.h imageio.h

clean:
	rm -f *.o
