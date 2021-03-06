#include <utility>
#pragma once


void setworldoffsetx(int x);
void setworldoffsety(int y);
float applyfriction(float speed, float fconst);
float applygravity(float speed);
std::pair<int, int> worldToTileCoordinates(float worldX, float worldY);