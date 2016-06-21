#include <iostream>
#include <cstdlib>

// Define C style.
#define WIDTH 256
#define HEIGHT 256

using namespace std;

// Simple structure.
struct Color {
    int r, g, b;
};

// Image creation with width and height.
Color* create_image(int width, int height) {
    // Allocate memory C style.
    return (Color*)malloc(sizeof(Color)*width*height);
}

// Delete image.
void delete_image(Color* image) {
    free(image);
}

int main() {
    Color* image = create_image(WIDTH, HEIGHT);
    
    cout << sizeof(*image) << endl;

    delete_image(image);
    return 0;
}