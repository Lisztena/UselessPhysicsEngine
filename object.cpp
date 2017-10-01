#include "object.h"
#include "assert.h"

namespace upe {
	void Particle::setMass(real m) {
		if(m!=0)
			inverseMass = 1.0 / m;
	}

	void Particle::setinverseMass(real m) {
		inverseMass = m;
	}

	void Particle::addForce(vector f) {
		force += f;
	}

	void Particle::removeForce(vector f) {
		force -= f;
	}

	vector Particle::getAcceleration() {
		return force * inverseMass;
	}

	void Particle::integrate(real duration) {
		assert(duration > 0.0);

		acceleration = getAcceleration();
		velocity += acceleration * tick;
		position += velocity * tick + acceleration * (tick * tick * 0.5);

		velocity *= real_pow(damping, duration);
	}
}
