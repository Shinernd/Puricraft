#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include "glm.h"

class Camera; //Camera.h

glm::mat4 makeViewMatrix(const Camera& camera);
glm::mat4 makeProjectionMatrix(float fov);

#endif