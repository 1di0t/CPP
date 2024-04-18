#include <iostream>
using namespace std;

class Pokemon
{
private:
    string name;
    int hp;
    static int count;//static Memory
public:
    Pokemon();
    Pokemon(string name, int hp);
    Pokemon(const Pokemon& pokemon);

    ~Pokemon();
    void attack();
    string getName() const;
    int getHp() const;
    void setName(string name);

    static int getCount();
};
int Pokemon::count = 0;

Pokemon::Pokemon() : name("모부기"), hp(10) {
    cout << "야생의 " << this->name << "가 나타났다\n";
    count++;
}
Pokemon::Pokemon(string name, int hp) : name(name), hp(hp) {
    cout << "야생의 " << this->name << "가 나타났다\n";
    count++;
}
Pokemon::Pokemon(const Pokemon& pokemon) : name(pokemon.name), hp(pokemon.hp) {
    cout << "야생의 " << this->name << "가 나&%/타$났다\n";
    count++;
}

Pokemon :: ~Pokemon() {
    cout << "야생의 " << this->name << "가 기절했다\n";
    count--;
}
string Pokemon::getName() const {

    return name;
}
int Pokemon::getHp() const {
    return hp;
}
void Pokemon::setName(string name) {
    this->name = name;
}
int Pokemon::getCount()
{
    return count;
}
void Pokemon::attack() {
    cout << "공격\t";
}

Pokemon* test() {
    Pokemon mobugi;
    Pokemon* pulin = new Pokemon("푸린", 10);
    cout << Pokemon::getCount() << "\n";
    return pulin;
}


int main()
{

    Pokemon* whalePrince = new Pokemon("고래왕자", 30);
    Pokemon* mobugi = test();

    cout << Pokemon::getCount() << "\n";
    cout << mobugi->getCount() << "\n";
    delete whalePrince;
    whalePrince = nullptr;
    cout << Pokemon::getCount() << "\n";
    delete mobugi;
    mobugi = nullptr;
    
 
    return 0;
}