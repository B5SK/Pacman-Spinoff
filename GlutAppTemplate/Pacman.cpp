#include "Pacman.h"

Pacman::Pacman (const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);
    
    
    RgbImage theTex( filename );
    
    glGenTextures( 1, &texture_id );
    glBindTexture( GL_TEXTURE_2D, texture_id );
    
    gluBuild2DMipmaps(GL_TEXTURE_2D, 3, theTex.GetNumCols(), theTex.GetNumRows(),
                      GL_RGB, GL_UNSIGNED_BYTE, theTex.ImageData() );
    this->texture_id = texture_id;
    
	this->rows = rows;
	this->cols = cols;
    
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;

	curr_row = 1;
	curr_col = 1;

	upb = downb = leftb = rightb = false;

}


void Pacman::moveUp(float rate){
    y += rate;
	upb = true;
	downb = leftb = rightb = false;
}
void Pacman::moveDown(float rate){
    y -= rate;
	downb = true;
	upb = leftb = rightb = false;
}
void Pacman::moveLeft(float rate){
    x -= rate;
	leftb = true;
	upb = downb = rightb = false;
	//std::cout << "moveleft called" <<std::endl;
}
void Pacman::moveRight(float rate){
    x += rate;
	rightb = true;
	upb = downb = leftb = false;
}




void Pacman::draw(){
    glBindTexture( GL_TEXTURE_2D, texture_id );
    glEnable(GL_TEXTURE_2D);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

    float xinc = 1.0/cols;
    float yinc = 1.0/rows;
    
    
    float top = 1 - yinc * (curr_row - 1);
    float bottom = 1 - yinc * curr_row;
    
    float left = xinc * (curr_col - 1);
    float right = xinc * curr_col;

	if(rightb){
	    glBegin(GL_QUADS);
	    
	    glTexCoord2f(left, bottom);
	    glVertex2f(x, y - h);
	    
	    glTexCoord2f(left, top);
	    glVertex2f(x, y);
	    
	    glTexCoord2f(right, top);
	    glVertex2f(x+w, y);
	    
	    glTexCoord2f(right, bottom);
	    glVertex2f(x+w, y - h);
	    
	    glEnd();
	    
	    glDisable(GL_TEXTURE_2D);
	}
	else if(leftb){

	    glBegin(GL_QUADS);
    
	    glTexCoord2f(right, top);
	    glVertex2f(x, y -h);
	    
	    glTexCoord2f(right, bottom);
	    glVertex2f(x, y);
	    
	    glTexCoord2f(left, bottom);
	    glVertex2f(x + w, y);
	    
	    glTexCoord2f(left, top);
	    glVertex2f(x + w, y - h);
	    
	    glEnd();
	    
	    glDisable(GL_TEXTURE_2D);

	}
	else if(downb){
	    glBegin(GL_QUADS);
	    
	    glTexCoord2f(right, bottom);
	    glVertex2f(x, y - h);
	    
	    glTexCoord2f(left, bottom);
	    glVertex2f(x, y);
	    
	    glTexCoord2f(left, top);
	    glVertex2f(x+w, y);
		    
	    glTexCoord2f(right, top);
	    glVertex2f(x+w, y - h);
		    
	    glEnd();
		    
	    glDisable(GL_TEXTURE_2D);

	}
	else if(upb){
	    glBegin(GL_QUADS);
    
	    glTexCoord2f(left, top);
	    glVertex2f(x, y - h);
		    
	    glTexCoord2f(right, top);
	    glVertex2f(x, y);
		    
	    glTexCoord2f(right, bottom);
	    glVertex2f(x+w, y);
		    
	    glTexCoord2f(left, bottom);
	    glVertex2f(x+w, y - h);
		    
	    glEnd();
		    
	    glDisable(GL_TEXTURE_2D);
	}
	else{

	    glBegin(GL_QUADS);
	    
	    glTexCoord2f(left, bottom);
	    glVertex2f(x, y - h);
	    
	    glTexCoord2f(left, top);
	    glVertex2f(x, y);
	    
	    glTexCoord2f(right, top);
	    glVertex2f(x+w, y);
	    
	    glTexCoord2f(right, bottom);
	    glVertex2f(x+w, y - h);
	    
	    glEnd();
	    
	    glDisable(GL_TEXTURE_2D);
	}
    
}

void Pacman::advance(){
	curr_col++;

	if(curr_col == cols){
		curr_col = 1;
	}
}

