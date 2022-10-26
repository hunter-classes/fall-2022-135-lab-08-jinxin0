#include "imageio.h"
#include "box.h"

void box(std::string if_name, std::string of_name)
{
	using IMG = int[MAX_H][MAX_W];
	IMG img;
	int h, w;
	readImage(if_name, img, h, w);
	IMG new_img;
	std::copy(&img[0][0], &img[0][0] + h * w, &new_img[0][0]);
	for (int i = h / 4 ; i < h * 3 / 4; i++)
		for (int j = w / 4; j < w * 3 / 4; j++)
			new_img[i][j] = 255;
	writeImage(of_name, new_img, h, w);
	return;
}
