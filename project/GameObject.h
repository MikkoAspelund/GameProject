#pragma once
// abstrakti yliluokka t�st� ei voi luoda oliota. :)
class GameObject
{
public:
	virtual void update(float deltaTime) = 0;

private:

};
