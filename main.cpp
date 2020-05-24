#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum CREAM {
    VANILLA,
    LEMON,
    CHOCOLATE,
    STRAWBERRY,
    CREAMY,
    CHEESE,
    CUSTARD,
    COFFEE
};

string getCream(CREAM cream) {
    switch (cream) {
        case CREAM::VANILLA:
            return "VANILLA";
        case CREAM::LEMON:
            return "LEMON";
        case CREAM::CHOCOLATE:
            return "CHOCOLATE";
        case CREAM::STRAWBERRY:
            return "STRAWBERRY";
        case CREAM::CREAMY:
            return "CREAMY";
        case CREAM::CHEESE:
            return "CHEESE";
        case CREAM::CUSTARD:
            return "CUSTARD";
        case CREAM::COFFEE:
            return "COFFEE";
    }
}

class Cake {
    string name;
    string date;
    string decoration;
    CREAM cream;
public:
    Cake(string name, string date, string decoration, CREAM cream) :
    name(name), date(date),
    decoration(decoration), cream(cream) {
    }

    const string &getName() const {
        return name;
    }

    const string &getDate() const {
        return date;
    }

    const string &getDecoration() const {
        return decoration;
    }

    CREAM getCream() const {
        return cream;
    }

    void printCake() {
        cout << getName() << " " << getDate() << " "
        << getDecoration() << " " << getCream() << endl;
    }

    static Cake *createLemonCake() {
        return new Cake("Lemon cake", "24.05.20", "lemon peel", CREAM::LEMON);
    }

    static Cake *createChocolateCake() {
        return new Cake("Chocolate cake", "23.05.20", "chocolate chip", CREAM::CHOCOLATE);
    }

    static Cake *createCoffeeCake() {
        return new Cake("Coffee cake", "24.05.20", "coffee bean", CREAM::COFFEE);
    }

    static Cake *createVanillaCake() {
        return new Cake("Vanilla cake", "24.05.20", "marmalade", CREAM::VANILLA);
    }

    static Cake *createStrawberryCake() {
        return new Cake("Strawberry cake", "23.05.20", "strawberry", CREAM::STRAWBERRY);
    }

};

int main() {
   Cake cake("Vanilla cake", "23.05.20", "strawberry", CHOCOLATE);
   cake.printCake();

   Cake *cake1(Cake::createChocolateCake());
   cake1->printCake();

   Cake *cake2(Cake::createStrawberryCake());
   cake2->printCake();

    Cake *cake3(Cake::createLemonCake());
    cake3->printCake();

    Cake *cake4(Cake::createCoffeeCake());
    cake4->printCake();

    Cake *cake5(Cake::createVanillaCake());
    cake5->printCake();

    return 0;
}
