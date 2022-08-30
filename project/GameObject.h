#pragma once
// abstrakti yliluokka tästä ei voi luoda oliota. :)
class GameObject
{
public:
	virtual void update(float deltaTime) = 0;

private:

};
