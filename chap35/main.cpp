#include <iostream>
class GameCharacter
{
public:
	int helthValue() const
	{
		int retVal = doHealthValue();
		return retVal;
	}

private:
	virtual int doHealthValue() const
	{
		std::cout << "GameCharacter dohealthValue" << std::endl;
		return 0;
	}
};

class CharacterA :public GameCharacter
{
private:
	virtual int doHealthValue() const override
	{
		std::cout << "CharacterA dohealthValue" << std::endl;
		return 1;
	}
};

int main()
{
	CharacterA cha;
	cha.helthValue();
}