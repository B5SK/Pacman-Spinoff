#include "Maze.h"

App::App(const char* label, int x, int y, int w, int h): GlutApp(label, x, y, w, h){
    // Initialize state variables
    mx = 0.0;
    my = 0.0;
}

void App::draw() {

    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // Set background color to black
    glClearColor(0.0, 0.0, 0.0, 1.0);
    
    // Set up the transformations stack
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Set Color
    glColor3d(0.0, 0.0, 1.0);
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.94, -0.5);
    glVertex2f(-0.94, 0.5);
    glVertex2f(-0.95, 0.5);
    glVertex2f(-0.95, -0.5);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.95, -0.5);
    glVertex2f(0.95, -0.5);
    glVertex2f(0.95, -0.49);
    glVertex2f(-0.95, -0.49);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.94, -0.5);
    glVertex2f(0.94, 0.5);
    glVertex2f(0.95, 0.5);
    glVertex2f(0.95, -0.5);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.95, 0.5);
    glVertex2f(0.95, 0.5);
    glVertex2f(0.95, 0.49);
    glVertex2f(-0.95, 0.49);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.35, 0.5);
    glVertex2f(-0.45, 0.5);
    glVertex2f(-0.45, 0.3);
    glVertex2f(-0.35, 0.3);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.35, 0.5);
    glVertex2f(0.45, 0.5);
    glVertex2f(0.45, 0.3);
    glVertex2f(0.35, 0.3);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.35, -0.5);
    glVertex2f(-0.45, -0.5);
    glVertex2f(-0.45, -0.3);
    glVertex2f(-0.35, -0.3);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.35, -0.5);
    glVertex2f(0.45, -0.5);
    glVertex2f(0.45, -0.3);
    glVertex2f(0.35, -0.3);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.58, 0.25);
    glVertex2f(-0.78, 0.25);
    glVertex2f(-0.78, 0.35);
    glVertex2f(-0.58, 0.35);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.58, 0.0);
    glVertex2f(-0.78, 0.0);
    glVertex2f(-0.78, 0.1);
    glVertex2f(-0.58, 0.1);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.58, -0.2);
    glVertex2f(-0.78, -0.2);
    glVertex2f(-0.78, -0.3);
    glVertex2f(-0.58, -0.3);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.58, 0.25);
    glVertex2f(0.78, 0.25);
    glVertex2f(0.78, 0.35);
    glVertex2f(0.58, 0.35);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.58, 0.0);
    glVertex2f(0.78, 0.0);
    glVertex2f(0.78, 0.1);
    glVertex2f(0.58, 0.1);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.58, -0.2);
    glVertex2f(0.78, -0.2);
    glVertex2f(0.78, -0.3);
    glVertex2f(0.58, -0.3);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.2, 0.25);
    glVertex2f(-0.2, 0.25);
    glVertex2f(-0.2, 0.35);
    glVertex2f(0.2, 0.35);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.2, -0.25);
    glVertex2f(-0.2, -0.25);
    glVertex2f(-0.2, -0.35);
    glVertex2f(0.2, -0.35);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.2, 0.25);
    glVertex2f(-0.2, -0.1);
    glVertex2f(-0.1, -0.1);
    glVertex2f(-0.1, 0.25);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.2, 0.2);
    glVertex2f(-0.2, 0.2);
    glVertex2f(-0.2, 0.3);
    glVertex2f(0.2, 0.3);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.1, 0.05);
    glVertex2f(0.1, -0.35);
    glVertex2f(0.2, -0.35);
    glVertex2f(0.2, 0.05);
    
    glEnd();
    glEnd();
    
     glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(0.45, 0.15);
    glVertex2f(0.45, -0.15);
    glVertex2f(0.35, -0.15);
    glVertex2f(0.35, 0.15);
    
    glEnd();
    glEnd();
    
    glBegin(GL_POLYGON);
    glBegin(GL_POINTS);
    
    glColor3f(0.0, 0.0, 1.0);
    
    glVertex2f(-0.45, 0.15);
    glVertex2f(-0.45, -0.15);
    glVertex2f(-0.35, -0.15);
    glVertex2f(-0.35, 0.15);
    
    glEnd();
    glEnd();
    
    glColor3d(1.0, 1.0, 1.0);
    
    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}

void App::mouseDown(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    // Redraw the scene
    redraw();
}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    // Redraw the scene
    redraw();
}

void App::keyPress(unsigned char key) {
    if (key == 27){
        // Exit the app when Esc key is pressed
        exit(0);
    }
}
