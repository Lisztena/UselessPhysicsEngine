#ifndef _OBJECT_H_
#define _OBJECT_H_
#include <math.h>
#include "vector.h"
namespace upe {
	class masspoint {
		public:
			masspoint(real m) {
				mass = m;
			}
			masspoint(real m, vector p) {
				mass = m;
				position = p;
			}
			masspoint(real m, vector p, vector f) {
				mass = m;
				position = p;
				force = f;
			}
			real mass; //kilogram
			vector force;
			vector position;
			vector velocity;
			void refreshPos(void);
		private:
			vector getAcceleration(void);
	};
}

#endif
