#include "App.h"

static App* singleton;

void advance(int value){
	singleton->body->advance();
	//glutTimerFunc(512, advance, value);
}

void move(int value){
    if (singleton->up){
        singleton->body->moveUp(0.015);
    }
    if (singleton->down){
        singleton->body->moveDown(0.015);
    }
    if (singleton->left){
        singleton->body->moveLeft(0.015);
    }
    if (singleton->right){
        singleton->body->moveRight(0.015);
    }
    if (singleton->up || singleton->down || singleton->left || singleton->right){
        singleton->redraw();
        //glutTimerFunc(2304, move, value);
    }
}



App::App(const char* label, int x, int y, int w, int h): GlutApp(label, x, y, w, h){
    // Initialize state variables
    
    singleton = this;
    mx = 0.0;
    my = 0.0;
    
    
    body = new Pacman("PMS.bmp", 1, 4, 0, 0.67, 0.1, 0.1);

    up = down = left = right = false;
    

}



void App::specialKeyPress(int key){
    if (key == 100){
        left = true;
    }
    if (key == 101){
        up = true;
    }
    if (key == 102){
        right = true;
    }
    if (key == 103){
        down = true;
    }
	advance(1);
    move(1);
}

void App::specialKeyUp(int key){
    if (key == 100) {
        left = false;
    }
    if (key == 101) {
        up = false;
    }
    if (key == 102) {
        right = false;
    }
    if (key == 103) {
        down = false;
    }
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
    glColor3d(1.0, 1.0, 1.0);
    
    body->draw();
   
    
    glDisable(GL_TEXTURE_2D);
    
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
   // redraw();
}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    
    // Redraw the scene
    //redraw();
}

void App::idle(){
}



void App::keyPress(unsigned char key) {
    if (key == 27){
        // Exit the app when Esc key is pressed
        
        delete body;
        
        exit(0);
    }

    
}
