﻿#include "Filter.h"
#include "Rotated.h"
#include "Teacher.h"

int main()
{
    unsigned int w;
    unsigned int h;



    // Un comment if you want to check buffer content
    /*for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            int r = image[i * w * 4 + j + 0]; // Red component
            int g = image[i * w * 4 + j + 1]; // Green component
            int b = image[i * w * 4 + j + 2]; // Blue component
            int a = image[i * w * 4 + j + 3]; // Alpha component
            std::cout << r << " ";
            std::cout << g << " ";
            std::cout << b << " ";
            std::cout << a << "|";
        }
        std::cout << endl;
    }*/

    //--> 'R': red_filter
    //--> 'G': green_filter
    //--> 'B': blue_filter

    /*auto image_red = decode("../in.png", w, h);
    filter(image_red, w, h, 'R');
    encode("../out_red.png", image_red, w, h);

    auto image_green = decode("../in.png", w, h);
    filter(image_green, w, h, 'G');
    encode("../out_green.png", image_green, w, h);

    auto image_blue = decode("../in.png", w, h);
    filter(image_blue, w, h, 'B');
    encode("../out_blue.png", image_blue, w, h);*/

    auto image = decode("../in.png", w, h);
    auto temp_image = rotated(image, w, h, 90);
    encode("../out_rotated.png", temp_image, w, h);

    return 0;
}
