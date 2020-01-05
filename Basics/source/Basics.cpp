#include <iostream>
#include <string>

using std::string;

/*-------------------------------------------------------------------------------------------*/

class Position // "Position" class definition
{
public: // <-- by default, class properties are private. Need to declare if public.
    float PositionX = 0, PositionY = 0, PositionZ = 0;
};

/*-------------------------------------------------------------------------------------------*/

class Character // "Character" class definition
{
private:
    string Name = "Ejie";
    char Gender = 'M';
    char BodyType[20] = "Messomorph";
    Position charPosition;// "Position" class instance
public: // <-- by default, class properties are private. Need to declare if public.
    void SetName(string& name)
    {
        Name = name;
    }
    string GetName()
    {
        return Name;
    }

    void SetPosition(float& posX, float& posY, float& posZ)
    {
        charPosition.PositionX = posX, charPosition.PositionY = posY, charPosition.PositionZ = posZ;
    }

    Position GetPosition()
    {
        return charPosition;
    }
};

/*-------------------------------------------------------------------------------------------*/

int main()
{
    Character NPC_0001; // "Character" class instance
    
    //set new name for the "NPC_0001" Character
    string newName = "Kumag";
    NPC_0001.SetName(newName);

    Position newPos;// "Position" class instance
    //set the xyz positions to 10;
    newPos.PositionX = 10;
    newPos.PositionY = 10;
    newPos.PositionZ = 10;
    
    // Display "NPC_0001" name and position to console
    std::cout << NPC_0001.GetName() << std::endl;
    std::cout << "Position: ";
    std::cout << "X: " << newPos.PositionX << ", Y: " << newPos.PositionY << ", Z: " << newPos.PositionZ << std::endl;
    std::cin.get();
}