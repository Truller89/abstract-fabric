#include <iostream>

class Human {
public:
    int health;
    int power;
    int armor;
    std::string unitClass;
};

class Warrior : public Human{
public:
    int health;
    int power;
    int armor;
    std::string unitClass;
    virtual void hit(Human& target) {
        std::cout << "HIT!" << std::endl;
    }
};


class Archer : public Human {
public:
    int health;
    int power;
    int agility;
    std::string unitClass;
    virtual void shot(Human& target) {
        std::cout << "SHOT!" << std::endl;
    }
};


class Mage : public Human {
public:
    int health;
    int power;
    int resist;
    std::string unitClass;
    virtual void spell(Human& target) {
        std::cout << "SPELL!" << std::endl;
    }
};

class EarthWarrior : public Warrior {
public:
    void hit(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health -= attack;
    }
    void hit(Archer& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;
        
        if (rand() % 100 > target.agility) target.health -= attack;
    }
    void hit(Mage& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;

        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};

class WaterWarrior : public Warrior {
public:
    void hit(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health -= attack;
    }
    void hit(Archer& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        if (rand() % 100 > target.agility) target.health -= attack;
    }
    void hit(Mage& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};

class FireWarrior : public Warrior {
public:
    void hit(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health - attack;
    }
    void hit(Archer& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        if (rand() % 100 > target.agility) target.health - attack;
    }
    void hit(Mage& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};



class EarthArcher : public Archer {
public:
    void shot(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health -= attack;
    }
    void shot(Archer& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;

        if (rand() % 100 > target.agility) target.health -= attack;
    }
    void shot(Mage& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;

        
        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};

class WaterArcher : public Archer {
public:
    void shot(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health -= attack;
    }
    void shot(Archer& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        if (rand() % 100 > target.agility) target.health -= attack;
    }
    void shot(Mage& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};

class FireArcher : public Archer {
public:
    void shot(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health -= attack;
    }
    void shot(Archer& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        if (rand() % 100 > target.agility) target.health -= attack;
    }
    void shot(Mage& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};


class EarthMage : public Mage {
public:
    void spell(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health -= attack;
    }
    void spell(Archer& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;

        if (rand() % 100 > target.agility) target.health -= attack;
    }
    void spell(Mage& target) {
        int attack = power;
        if (target.unitClass == "Water") attack *= 1.4;
        if (target.unitClass == "Fire") attack /= 1.4;

        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};

class WaterMage : public Mage {
public:
    void spell(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health -= attack;
    }
    void spell(Archer& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        if (rand() % 100 > target.agility) target.health -= attack;
    }
    void spell(Mage& target) {
        int attack = power;
        if (target.unitClass == "Fire") attack *= 1.4;
        if (target.unitClass == "Earth") attack /= 1.4;

        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};

class FireMage : public Mage {
public:
    void spell(Warrior& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        attack -= target.armor;
        if (attack > 0) target.health -= attack;
    }
    void spell(Archer& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        if (rand() % 100 > target.agility) target.health -= attack;
    }
    void spell(Mage& target) {
        int attack = power;
        if (target.unitClass == "Earth") attack *= 1.4;
        if (target.unitClass == "Water") attack /= 1.4;

        attack *= (100.0 - target.resist) / 100;
        if (attack > 0) target.health -= attack;
    }
};

class CharacterFactory {
public:
    virtual Mage createMage(int h, int p, int r) const{
        Mage newUnit;
        newUnit.health = h;
        newUnit.power = p;
        newUnit.resist = r;
        return newUnit;
    }
    virtual Archer createArcher(int h, int p, int a) const{
        Archer newUnit;
        newUnit.health = h;
        newUnit.power = p;
        newUnit.agility = a;
        return newUnit;
    }
    virtual Warrior createWarrior(int h, int p, int a) const{
        Warrior newUnit;
        newUnit.health = h;
        newUnit.power = p;
        newUnit.armor = a;
        return newUnit;
    }
};

class EarthCharFactory : public CharacterFactory {
public:
    auto createMage(int h, int p, int r) {
        EarthMage newUnit;
        newUnit.unitClass = "Earth";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.resist = r;
        return newUnit;
    }
    auto createArcher(int h, int p, int a) {
        EarthArcher newUnit;
        newUnit.unitClass = "Earth";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.agility = a;
        return newUnit;
    }
    auto createWarrior(int h, int p, int a) {
        EarthWarrior newUnit;
        newUnit.unitClass = "Earth";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.armor = a;
        return newUnit;
    }
};

class WaterCharFactory : public CharacterFactory {
public:
    auto createMage(int h, int p, int r) {
        WaterMage newUnit;
        newUnit.unitClass = "Water";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.resist = r;
        return newUnit;
    }
    auto createArcher(int h, int p, int a) {
        WaterArcher newUnit;
        newUnit.unitClass = "Water";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.agility = a;
        return newUnit;
    }
    auto createWarrior(int h, int p, int a) {
        WaterWarrior newUnit;
        newUnit.unitClass = "Water";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.armor = a;
        return newUnit;
    }
};

class FireCharFactory : public CharacterFactory {
public:
    auto createMage(int h, int p, int r) {
        FireMage newUnit;
        newUnit.unitClass = "Fire";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.resist = r;
        return newUnit;
    }
    auto createArcher(int h, int p, int a) {
        FireArcher newUnit;
        newUnit.unitClass = "Fire";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.agility = a;
        return newUnit;
    }
    auto createWarrior(int h, int p, int a) {
        FireWarrior newUnit;
        newUnit.unitClass = "Fire";
        newUnit.health = h;
        newUnit.power = p;
        newUnit.armor = a;
        return newUnit;
    }
};

int main()
{
    EarthCharFactory base1;
    EarthArcher luchnik = base1.createArcher(100, 20, 10);
    FireCharFactory base2;
    FireMage mag = base2.createMage(100, 30, 40);
    std::cout << mag.health << std::endl;
    luchnik.shot(mag);
    std::cout << mag.health << std::endl;
    std::cout << luchnik.health << std::endl;
    mag.spell(luchnik);
    std::cout << luchnik.health << std::endl;
}
