//#include <iostream>
//using namespace std;
//
//class Pokemon
//{
//private:
//    string name = "���ϸ�";//m_name //to replace this keyword
//    int hp;//m_hp
//public:
//    Pokemon() {
//        cout << "�߻��� " << this->name << "�� ��Ÿ����\n";
//        //cout << "�߻��� " << this << "�� ��Ÿ����\n";//print address
//
//    }
//    Pokemon(string name, int hp) {
//        this->name = name;//initialize member variable to parameter
//        this->hp = hp;
//        cout << "�߻��� " << this->name << "�� ��Ÿ����\n";
//    }
//
//    //Copy Constructer
//    Pokemon(const Pokemon& pokemon) {//reference var
//        this->name = pokemon.name;
//        this->hp = pokemon.hp;
//        cout << "�߻��� " << this->name << "�� ��&Ÿ����\n";
//    }
//
//    ~Pokemon() {
//        cout << "�߻��� " << this->name << "�� �����ߴ�\n";
//    }
//    void attack() {
//        cout << "����\t";
//    }
//    string getName() { return name; }
//    int getHp() { return hp; }
//    void setName(string name) { this->name = name; }
//
//};
//
//void test() {
//    Pokemon pizon;//default
//    //Pokemon* pulin = new Pokemon("Ǫ��",10);
//}
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