// create a bot with q-learning algorithm

#include "stdafx.h"
#include "relearn.hpp"
#include <vector>
#include "deep.h"
using namespace relearn;

void deep::Update() {
	// create a reward: distance to exit
	//_targetX = nodeX * PIXELS_IN_NODES;
	//_targetY = nodeY * PIXELS_IN_NODES;
	CalculatePathFromXYtoXY(_playerPositionX, _playerPositionY, _targetX, _targetY, PIXEL_COORDS);
	std::cout << "FOUND: X: " << (_targetX / 16) << " Y: " << (_targetY / 16) << std::endl;
}