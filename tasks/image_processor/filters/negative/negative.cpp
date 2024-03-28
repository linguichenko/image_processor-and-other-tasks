#include "../../image_creation/image.h"
#include "negative.h"

void Negative::Apply(Image &image) const {
    for (int i = 0; i < image.GetHeight(); ++i) {
        for (int j = 0; j < image.GetWidth(); ++j) {
            float red = 1 - image.GetColor(i, j).r;
            float green = 1 - image.GetColor(i, j).g;
            float blue = 1 - image.GetColor(i, j).b;
            image.SetColor(red, green, blue, i, j);
        }
    }
}
