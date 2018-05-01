#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <gl\glew.h>
#include <GLFW\glfw3.h>
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
//#include <glm\gtx\transform.hpp>

GLuint LoadShaders(const char *, const char *);
GLuint loadBMP_custom(const char *);