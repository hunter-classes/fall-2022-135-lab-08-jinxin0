#include <iostream>
#include "invert.h"
#include "invert_half.h"
#include "box.h"

int main()
{
	invert("image1.pgm", "taskA.pgm");
	invert_half("image1.pgm", "taskB.pgm");
	box("image1.pgm", "taskC.pgm");
	return 0;
}
