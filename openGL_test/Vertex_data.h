#pragma once
#include <gl\glew.h>
#include <GLFW\glfw3.h>

class Vertex_data
{
public:
	Vertex_data();
	~Vertex_data();

	static GLfloat cube_color_data[108];
	static GLfloat textureCoordinate[6];
	static GLfloat tri_data[9];
	static GLfloat cube_data[108];
	static GLfloat color[9];
};

