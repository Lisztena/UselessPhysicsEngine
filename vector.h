#ifndef _VECTOR_H_
#define _VECTOR_H_
#include "data.h"
namespace upe {
	class vector {
		public:
			vector() {
				x=0;
				y=0;
				z=0;
			}
			vector(real x0, real y0, real z0) {
				x=x0;
				y=y0;
				z=z0;
			}
			real x,y,z;//coordinate of 3-D vector
			vector operator= (const vector);
			vector operator+ (const vector);
			void operator+= (const vector);
			vector operator- (const vector);
			void operator-= (const vector);
			vector operator* (const real);
			void operator*= (const real);
			real operator* (const vector);
			void Normalize(void);
			real getNorm(void);
			real getNormSquared(void);
			real getCosine(vector);
		private:
	};
}

#endif
