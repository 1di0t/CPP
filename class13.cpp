#include <iostream>
using namespace std;

class Pokemon
{
private:
    //mutable string name;//can init this variable even const keyword is exist
    string name;//m_name //to replace this keyword
    int hp;
public:
    Pokemon();
    Pokemon(string name, int hp);
    Pokemon(const Pokemon& pokemon);

    ~Pokemon();
    void attack();
    string getName() const;
    int getHp() const;
    void setName(string name);

};

Pokemon::Pokemon() : name("��α�"), hp(10) {
    cout << "�߻��� " << this->name << "�� ��Ÿ����\n";
}
Pokemon::Pokemon(string name, int hp) : name(name), hp(hp) {//initialize list
    cout << "�߻��� " << this->name << "�� ��Ÿ����\n";
}
Pokemon::Pokemon(const Pokemon& pokemon) : name(pokemon.name), hp(pokemon.hp) {//reference var
    cout << "�߻��� " << this->name << "�� ��&%/Ÿ$����\n";
}

Pokemon :: ~Pokemon() {
    cout << "�߻��� " << this->name << "�� �����ߴ�\n";
}
string Pokemon::getName() const {
    //name = "������";//without const this code can run
    return name;
} //const Ű���� �߰��� �ش� �Լ� �ȿ��� ���̵� ����Ʈ(side effect)(�޸𸮰��� ����)�� �߻����� ������ ����
int Pokemon::getHp() const { return hp; }
void Pokemon::setName(string name) { this->name = name; }
void Pokemon::attack() { cout << "����\t"; }

Pokemon* test() {
    Pokemon mobugi;//default
    Pokemon* pulin = new Pokemon("Ǫ��",10);//Memory Leak
    return pulin;
}//when test is end mobugi is dead


int main()
{
    //Pokemon* giratina = new Pokemon("���Ƽ��", 10000);//HeapMemory
    //Pokemon pikachu("��ī��", 99);
    //Pokemon firy("���̸�", 999);
    Pokemon* pulin = test();//ȣ��� �Ҹ�

    delete pulin;
    //Pokemon p7(pikachu);
    ////Pokemon p7 = pikachu;
    //p7.setName("����ī��");
    //cout << "\n\n" << p7.getName();
    //cout << "\n\n" << p7.getHp() << "\n\n";
    //Pokemon pichu("����", 30);//StackMemory
    //cout << pikachu.getName() << "\n";
    //cout << giratina->getName() << " - HP : " << giratina->getHp() << "\n";;
    //delete giratina;//�� �Ҵ� ����
    return 0;
}