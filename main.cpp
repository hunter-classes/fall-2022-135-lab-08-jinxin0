#include <iostream>
#include "invert.h"
#include "invert_half.h"
#include "box.h"
#include "frame.h"
#include "scale.h"

int main()
{
	invert("image1.pgm", "taskA.pgm");
	invert_half("image1.pgm", "taskB.pgm");
	box("image1.pgm", "taskC.pgm");
	frame("image1.pgm", "taskD.pgm");
	scale("image3.pgm", "taskE.pgm");
	return 0;
}
