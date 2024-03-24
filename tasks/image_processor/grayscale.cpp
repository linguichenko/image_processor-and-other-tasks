#include "image.h"
#include "filter.h"



void Greyscale::Apply(Image &image) {
    const float red = 0.299;
    const float green = 0.587;
    const float blue = 0.114;
    for (int i = 0; i < image.height_; ++i) {
        for (int j = 0; j < image.width_; ++j) {
            float color = 0;
            color = red * image.GetColor(i, j).r + green * image.GetColor(i, j).g + blue * image.GetColor(i, j).b;
            image.SetColor(color, color, color, i, j);
        }
    }
}


