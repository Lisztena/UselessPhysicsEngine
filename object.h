#ifndef _OBJECT_H_
#define _OBJECT_H_
#include <math.h>
#include "vector.h"
namespace upe {
	class Particle {
		public:
			Particle() {
				damping = 0.97;
			}
			void setMass(real);
			void setinverseMass(real);
			void addForce(vector);
			void removeForce(vector);
			void integrate(real);
		protected:
			real inverseMass; //kilogram
			real damping;
			vector force;
			vector acceleration;
			vector position;
			vector velocity;
		private:
			vector getAcceleration(void);
	};
}

#endif
