#ifndef POSITION_H
#define POSITION_H

#define ROW_MIN 1
#define ROW_MAX 8
#define COLUMN_MIN 'A'
#define COLUMN_MAX 'H'

enum Direction
{
	UP, DOWN, LEFT, RIGHT
};

class Position {
public:

	Position(int row, char column);

	void print();
	void set_Position(int row, char column);
	void move(Direction direction);
	
	bool same_Direction(Position* p);
	bool same_Direction(Position p);

private:
	int row;
	char column;
};

#endif 

