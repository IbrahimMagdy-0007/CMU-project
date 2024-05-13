//Header file for Basic shapes in the game
#pragma once
#include "shape.h"

////////////////////////////////////////////////////  class Rect  ///////////////////////////////////////
//Rectanle class
/*							wdth
					---------------------
					|					|
			hght    |		 x			|     x is the reference point of the rectangle
					|					|
					--------------------
*/


class Rect:public shape
{
	int hght, wdth;	//height and width of the recangle
public:
	Rect(game* r_pGame, point ref, int r_hght, int r_wdth);
	virtual void draw() const;
	void Rotate90Clockwise(const point& center);
	void resizeUp() override;
	void resizeDown()�override;



};




////////////////////////////////////////////////////  class circle  ///////////////////////////////////////
//Reference point of the circle is its center
class circle :public shape
{
	//Add data memebrs for class circle
	int rad;
public:	
	circle(game* r_pGame, point ref, int r);	//add more parameters for the constructor if needed
	virtual void draw() const;
	void Rotate90Clockwise(const point& center);
	void resizeUp() override;
	void resizeDown()�override;
};


class Triangle : public shape {
private:
	int height, baseWidth;

public:
	
	Triangle(game* pGame, point ref, int r_height, int r_baseWidth);

	
	virtual void draw() const override;
	void rotate90Clockwise();
	void Rotate90Clockwise(const point& center);


};