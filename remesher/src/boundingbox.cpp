#include "boundingbox.h"
#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#else
#ifdef _WIN32
#include <Windows.h>
#endif
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#endif
#include "glCanvas.h"

// ====================================================================
// ====================================================================

void BoundingBox::paint() const {
  // draw a wireframe box to represent the boundingbox
  
  //  glColor3f(1,1,1);
  //glLineWidth(1);
  glDisable(GL_LIGHTING);
  glBegin(GL_LINES);

  glVertex3f(min.x(),min.y(),min.z());
  glVertex3f(max.x(),min.y(),min.z());
  glVertex3f(min.x(),min.y(),min.z());
  glVertex3f(min.x(),max.y(),min.z());
  glVertex3f(max.x(),max.y(),min.z());
  glVertex3f(max.x(),min.y(),min.z());
  glVertex3f(max.x(),max.y(),min.z());
  glVertex3f(min.x(),max.y(),min.z());

  glVertex3f(min.x(),min.y(),min.z());
  glVertex3f(min.x(),min.y(),max.z());
  glVertex3f(min.x(),max.y(),min.z());
  glVertex3f(min.x(),max.y(),max.z());
  glVertex3f(max.x(),min.y(),min.z());
  glVertex3f(max.x(),min.y(),max.z());
  glVertex3f(max.x(),max.y(),min.z());
  glVertex3f(max.x(),max.y(),max.z());

  glVertex3f(min.x(),min.y(),max.z());
  glVertex3f(max.x(),min.y(),max.z());
  glVertex3f(min.x(),min.y(),max.z());
  glVertex3f(min.x(),max.y(),max.z());
  glVertex3f(max.x(),max.y(),max.z());
  glVertex3f(max.x(),min.y(),max.z());
  glVertex3f(max.x(),max.y(),max.z());
  glVertex3f(min.x(),max.y(),max.z());

  glEnd();
  glEnable(GL_LIGHTING);	   
}

// ====================================================================
// ====================================================================
