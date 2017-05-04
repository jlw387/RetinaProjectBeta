#pragma once
#include "stdafx.h"
#include "Neuron.h"
#include "Photon.h"
#include <vector>

#ifndef PHOTORECEPTOR
#define PHOTORECEPTOR

class Photoreceptor : public Neuron {
public:
	enum ReceptorType {
		RED,
		GREEN,
		BLUE,
		ROD,
	};
protected:
	//double eccentricity;
	//double locationAngle; //Relative to straight up
	std::vector<Photon> photonQueue;
	ReceptorType receptorType;

public:
	double xc;
	double yc;
	virtual const char getType() override; // returns the type 
	virtual const char getRGB(); // creates a virtual method which is overriden by rods and cones
	virtual const double getX();
	virtual const double getY();
	static bool isAbsored(Photon p, ReceptorType t);
	Photoreceptor();
	void addPhotons(std::vector<Photon> newPhotons);
	virtual void update(float elapsedSeconds);
};

#endif