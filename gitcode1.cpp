#include <iostream>

class box {
private:
    int hight;
    int width;
public:
    void getDimensions();
    void showDimensions();
};

void box::getDimensions() {
    std::cout << "Enter the hight of the box is : ";
    std::cin >> hight;
    std::cout << "Enter the width of the box is : ";
    std::cin >> width;
}

void box::showDimensions() {
    std::cout << "hight of the box is : " << hight << std::endl;
    std::cout << "Width of the box is : " << width << std::endl;
}

int main() {
    box home;
    home.getDimensions();
    home.showDimensions();

    return 0;
}
