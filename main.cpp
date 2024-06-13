#include <iostream>
#include <string>
using namespace std;


class Pokemon {
private:
    int hp;
public:
    Pokemon() {
        this->hp = 1;
        cout << "포켓몬이 기본볼에서 나왔다" << "\n";
    }
    Pokemon(int hp) {
        this->hp = hp;
        cout << "포켓몬이 볼에서 나왔다" << "\n";
    };
    virtual ~Pokemon() {
        cout << "포켓몬이 기절했다" << this << "\n";
    };
    virtual void info() const {
        cout << "포켓몬 객체 메모리 위치" << this << "\n";
        cout << "체력 : " << this->hp << "\n";
    };
};
class Pikachu : public Pokemon {
private:
    string type;
public:
    Pikachu(string type, int hp) :type(type), Pokemon(hp) {

    };
    ~Pikachu() {
        cout << "피카츄가 기절했다" << this << "\n";
    }
    void info() const {
        Pokemon::info();
        cout << "포켓몬 타입" << type << "\n";

    };
};
class Piri : public Pokemon {
private:
    string type;
public:
    Piri(string type) :type(type) {

    };
    ~Piri() {
        cout << "파이리가 기절했다" << this << "\n";
    }
    void info() const {

        cout << "포켓몬 타입" << type << "\n";

    };
    
};
class Trainer {
private:
    string name;
public:
    Pokemon* pokemon;//has a

    Trainer(string name, Pokemon* p) :name(name), pokemon(p) {
        cout << "트레이너" << name << "\n";
    }
    ~Trainer() {
        cout <<name<< " 소멸" << "\n";
        delete pokemon;
        pokemon = nullptr;
    };

    void orderpokemon() {
        cout << "========================\n";
        pokemon->info();
    }
    void setPokemon(Pokemon* p) {
        pokemon = p;
    }
};
int main() {
    Pikachu* pikacchu = new Pikachu("전기",50);



    Trainer trainer1("지우",pikacchu);
    
    trainer1.setPokemon(new Piri("fire"));

    trainer1.orderpokemon();

    delete pikacchu;
    pikacchu = nullptr;
    

    return 0;
}