#pragma once
#include "stdafx.h"
#include "Photoreceptor.h"

#ifndef CONE
#define CONE

class Cone : public Photoreceptor {
public:
	static constexpr double PEAK_DENSITY() { return 199.2f; }
	static constexpr double PERIPHERY_DENSITY() { return 3.6f; }
	static constexpr double MEAN_DENSITY_CONSTANT() { return 15; } //Ignore these for now

	//Cone(ReceptorType t);

	Cone(ReceptorType t, double x, double y);
	virtual const char getRGB() override;
	virtual const double getX();
	virtual const double getY();
	virtual void update(float elapsedSeconds) override;
	virtual const char getType() override;
};

#endif 