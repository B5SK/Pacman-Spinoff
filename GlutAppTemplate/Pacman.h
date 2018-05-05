#ifndef Pacman_h
#define Pacman_h

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

#include "RgbImage.h"

class Pacman {
    float x;
    float y;
    float w;
    float h;
    GLuint texture_id;

	int rows;
	int cols;

	int curr_row;
	int curr_col;

	bool upb, downb, leftb, rightb;

public:
    Pacman (const char*, int, int, float, float, float, float);
    
    void draw();
    
    void moveUp(float rate=0.01);
    void moveDown(float rate=0.01);
    void moveLeft(float rate=0.01);
    void moveRight(float rate=0.01);


	void advance();

};

#endif
