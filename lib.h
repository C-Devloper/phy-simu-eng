#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef enum{
	object_triangle,
	object_square,
	object_sphere,
	object_rectangle
	
	}Objecttype;
	
	typedef struct{
		bool iselastic;
		float x,y;
		float vx ,vy;
		float mass;
		Objecttype type;
		union{
			struct{
				float radius;
			}sphere;
			struct{
				float width,height;
			}rectangle;
			
		}shapedata;
	}Object;
	//function for creating a shpere
Object* create_sphere(float x, float y,float vy, float vx, float mass,float radius,bool iselastic;){
Object* obj = (Object*)malloc(sizeof(Object));
if(obj == NULL) return NULL;
obj->iselastic = iselastic;
obj->x = x;
obj->y = y;
obj->vx = vx;
obj->vy = vy;
obj->mass = mass;
obj->type = object_sphere;
obj->shapedata.sphere.radius = radius;
return obj;
}
