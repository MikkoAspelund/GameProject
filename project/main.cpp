#include <iostream>
#include <vector>
#include "GameObject.h" //korjtan myöhemmin


class Player : public GameObject
{
public:

	void update(float deltaTime)
	{
		std::cout << "Player" << std::endl;
	};
private:


};

class Enemy : public GameObject

{
public:

	void update(float deltaTime)
	{
		std::cout << "Enemy" << std::endl;
	};
private:


};

class Projectile : public GameObject

{
public:

	void update(float deltaTime)
	{
		std::cout << "Projectile" << std::endl;
	};
private:


};

class PickableItem : public GameObject

{
public:

	void update(float deltaTime)
	{
		std::cout << "PickableItem" << std::endl;
	};
private:


};

int main()
{
	//vektori jossa peliolioita:
	std::vector<GameObject*> gameObjects;

	Player* player1 = new Player;
	Enemy* enemy1 = new Enemy;
	Projectile* Projectile1 = new Projectile;
	PickableItem* PickableItem1 = new PickableItem;

	gameObjects.push_back(player1);
	gameObjects.push_back(enemy1);
	gameObjects.push_back(Projectile1);
	gameObjects.push_back(PickableItem1);

	//kutsutaan update kaikille peliolioille
	for (int i = 0; i < gameObjects.size(); i++ )
	{
		gameObjects[i]->update(1);
	};

}