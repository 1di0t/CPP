//#include <iostream>
//using namespace std;
//
//class Pokemon
//{
//private:
//    string name;//m_name //to replace this keyword
//    int hp;
//public:
//    Pokemon();
//    Pokemon(string name, int hp);
//    Pokemon(const Pokemon& pokemon);
//
//    ~Pokemon();
//    void attack();
//    string getName();
//    int getHp();
//    void setName(string name);
//
//};
//
//Pokemon :: Pokemon() : name("��α�"), hp(10){
//    cout << "�߻��� " << this->name << "�� ��Ÿ����\n"; 
//}
//Pokemon :: Pokemon(string name, int hp) : name(name), hp(hp) {//initialize list
//    cout << "�߻��� " << this->name << "�� ��Ÿ����\n";
//}
//Pokemon :: Pokemon(const Pokemon& pokemon) : name(pokemon.name), hp(pokemon.hp) {//reference var
//    cout << "�߻��� " << this->name << "�� ��&%/Ÿ$����\n";
//}
//
//Pokemon :: ~Pokemon() {
//    cout << "�߻��� " << this->name << "�� �����ߴ�\n";
//}
//string Pokemon ::getName() { return name; }
//int Pokemon :: getHp() { return hp; }
//void Pokemon :: setName(string name) { this->name = name; }
//void Pokemon :: attack() {cout << "����\t";}
//
//void test() {
//    Pokemon pizon;//default
//    //Pokemon* pulin = new Pokemon("Ǫ��",10);
//}
//
//
//int main()
//{
//    Pokemon* giratina = new Pokemon("���Ƽ��", 10000);//HeapMemory
//    Pokemon pikachu("��ī��", 99);
//    Pokemon firy("���̸�", 999);
//    test();//ȣ��� �Ҹ�
//
//
//    Pokemon p7(pikachu);
//    //Pokemon p7 = pikachu;
//    p7.setName("����ī��");
//    cout << "\n\n" << p7.getName();
//    cout << "\n\n" << p7.getHp() << "\n\n";
//    Pokemon pichu("����", 30);//StackMemory
//    cout << pikachu.getName() << "\n";
//    cout << giratina->getName() << " - HP : " << giratina->getHp() << "\n";;
//    delete giratina;//�� �Ҵ� ����
//    return 0;
//}