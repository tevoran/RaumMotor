//A simple test to see whether the build system works or not.
#include <iostream>
#include <glm/glm.hpp>

#define SUCCESS 0
#define ERROR 1
int main(int argc, char* argv[])
{
    std::cout << "Testing the RaumMotor build system:\n";
    //if this is being shown then standard library already works
    std::cout << "C++ stdlib: [OK]\n";

    std::cout << "GLM: ";
    bool glm_works = false;
    glm::vec3 a = {0.0f, 1.0f, 2.0f};
    glm::vec3 b = {1.0f, 2.0f, 3.0f};
    glm::vec3 c = {1.0f, 3.0f, 5.0f};
    if(c == a + b)
    {
        glm_works = true;
    }
    if(glm_works)
    {
        std::cout << "[OK]\n";
    }
    else
    {
        std::cout << "[FAILED]\n";
        return ERROR;
    }

    return SUCCESS;
}