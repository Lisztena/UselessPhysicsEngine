#include "object.h"

namespace upe {
	vector masspoint::getAcceleration() {
		return force * (1/mass);
	}
	
	void masspoint::refreshPos() {
		vector a = getAcceleration();
		velocity += a*tick;
		position += velocity*tick + a*(tick*tick/2);
	}
}
