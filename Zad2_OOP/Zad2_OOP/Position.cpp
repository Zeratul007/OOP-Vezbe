#include"Position.h"
#include <iostream>
using namespace std;

Position::Position(int row, char column) {
	this->set_Position(row, column);
}

void Position::print(){
	cout << this->column << this->row << endl;
}

void Position::set_Position(int row, char column){
	this->row = (row >= ROW_MIN && row <= ROW_MAX) ? row : ROW_MIN;
	this->column = (column >= COLUMN_MIN && column <= COLUMN_MAX) ? column : COLUMN_MIN;
}

bool Position::same_Direction(Position* p) {
	return p->row == this->row || p->column == this->column;
}

bool Position::same_Direction(Position p) {
	p.row == this->row || p.column == this->column;
}

void Position::move(Direction direction)
{
	switch (direction)
	{
	case UP:
		if (this->row > ROW_MIN) this->row--;
		break;
	case DOWN:
		if (this->row < ROW_MAX) this->row++;
		break;
	case LEFT:
		if (this->column > COLUMN_MIN) this->column--;
		break;
	case RIGHT:
		if (this->row < COLUMN_MAX) this->column++;
		break;
	default:
		break;
	}
}