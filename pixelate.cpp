#include <cmath>
#include "imageio.h"
#include "pixelate.h"

void pixelate(std::string if_name, std::string of_name)
{
	using IMG = int[MAX_H][MAX_W];
	IMG img;
	int h, w;
	readImage(if_name, img, h, w);
	IMG new_img;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int average = std::round((img[i * 2][j * 2] + img[i * 2][j * 2 + 1] + img[i * 2 + 1][j * 2] + img[i * 2 + 1][j * 2 + 1]) / 4);
            new_img[i * 2][j * 2] = average;
            new_img[i * 2][j * 2 + 1] = average;
            new_img[i * 2 + 1][j * 2] = average;
            new_img[i * 2 + 1][j * 2 + 1] = average;
        }
    }
	writeImage(of_name, new_img, h, w);
	return;
}
