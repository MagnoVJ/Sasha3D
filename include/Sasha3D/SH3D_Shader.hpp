#pragma once

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

namespace sasha3d {

    class SH3DShader {

    private:
        void checkCompileErrors(unsigned int shader, std::string type);

    public:
        GLuint ID;
        SH3DShader(const char* vertexPath, const char* fragmentPath);
        void useProgram(); 

        void setBool(const std::string &name, bool value);
        void setInt(const std::string &name, int value);
        void setFloat(const std::string &name, float value);
    };

}