//
// Created by pierre on 18-5-2.
//
#include <map>
#include "Vec2.hpp"
#include "../config/config.hpp"

#ifndef A_START_MAP_HPP
#define A_START_MAP_HPP
enum CellState{
	UNCLEANABLE = 0,
	CLEANABLE,
};
typedef std::pair<CellState,Vec2i> Cell;
class Map{
public:
	static Map& Instance(){
		static Map instance;
		return instance;
	}
	void setCell(int16_t x, int16_t y, CellState status);
	CellState getCell(int16_t x, int16_t y) const;
	void printMap(const Vec2i curr, const Vec2i target) const;
	CellState cleanMap_[MAP_SIZE][MAP_SIZE];
private:
	int16_t x_min;
	int16_t x_max;
	int16_t y_min;
	int16_t y_max;
};
#endif //A_START_MAP_HPP