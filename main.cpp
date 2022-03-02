#include <iostream>
#include <adder.h>
#include <GLFW/glfw3.h>
#include <helloConfig.h>

int main(int argc, char *argv[]) {
    std::cout << "Hello World!\n";
    std::cout << add(.5, .25) << "\n";

    std::cout << argv[0] << " VERSION " << HELLO_VERSION_MAJOR << "." << HELLO_VERSION_MINOR << "\n";

    GLFWwindow *window;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    return 0;
}