#include <iostream>
#include <string>
using namespace std;


class Pokemon {
private:
    int hp;
public:
    Pokemon() {
        this->hp = 1;
        cout << "���ϸ��� �⺻������ ���Դ�" << "\n";
    }
    Pokemon(int hp) {
        this->hp = hp;
        cout << "���ϸ��� ������ ���Դ�" << "\n";
    };
    virtual ~Pokemon() {
        cout << "���ϸ��� �����ߴ�" << this << "\n";
    };
    virtual void info() const {
        cout << "���ϸ� ��ü �޸� ��ġ" << this << "\n";
        cout << "ü�� : " << this->hp << "\n";
    };
};
class Pikachu : public Pokemon {
private:
    string type;
public:
    Pikachu(string type, int hp) :type(type), Pokemon(hp) {

    };
    ~Pikachu() {
        cout << "��ī�� �����ߴ�" << this << "\n";
    }
    void info() const {
        Pokemon::info();
        cout << "���ϸ� Ÿ��" << type << "\n";

    };
};
class Piri : public Pokemon {
private:
    string type;
public:
    Piri(string type) :type(type) {

    };
    ~Piri() {
        cout << "���̸��� �����ߴ�" << this << "\n";
    }
    void info() const {

        cout << "���ϸ� Ÿ��" << type << "\n";

    };
    
};
class Trainer {
private:
    string name;
public:
    Pokemon* pokemon;//has a

    Trainer(string name, Pokemon* p) :name(name), pokemon(p) {
        cout << "Ʈ���̳�" << name << "\n";
    }
    ~Trainer() {
        cout <<name<< " �Ҹ�" << "\n";
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
    Pikachu* pikacchu = new Pikachu("����",50);



    Trainer trainer1("����",pikacchu);
    
    trainer1.setPokemon(new Piri("fire"));

    trainer1.orderpokemon();

    delete pikacchu;
    pikacchu = nullptr;
    

    return 0;
}