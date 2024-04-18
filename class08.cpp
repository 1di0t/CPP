//#include <iostream>
//using namespace std;
//
//class Pokemon
//{
//private:
//    string name = "포켓몬";
//    int hp;
//public:
//    Pokemon() {
//        cout << "야생의 " << this->name << "가 나타났다\n";
//
//    }
//    Pokemon(string n, int h) {
//        name = n;
//        hp = h;
//        cout << "야생의 " << this->name << "가 나타났다\n";
//    }
//
//    //Copy Constructer
//    Pokemon(const Pokemon& p) {
//        this->name = p.name;
//        this->hp = p.hp;
//        cout << "야생의 " << this->name << "가 나&타났다\n";
//    }
//
//    ~Pokemon() {
//        cout << "야생의 " << this->name << "가 기절했다\n";
//    }
//    void attack() {
//        cout << "공격\t";
//    }
//    string getName() { return name; }
//    int getHp() { return hp; }
//    void setName(string name) { this->name = name; }
//
//};
//
//void test() {
//    Pokemon pizon;//default
//    //Pokemon* pulin = new Pokemon("푸린",10);
//}
//int main()
//{
//    Pokemon* giratina = new Pokemon("기라티나", 10000);//HeapMemory
//    Pokemon pikachu("피카츄", 99);
//    Pokemon firy("파이리", 999);
//    test();//호출과 소멸
//    Pokemon p7(pikachu);
//    //Pokemon p7 = pikachu;
//    p7.setName("피피카츄");
//    cout << "\n\n" << p7.getName();
//    cout << "\n\n" << p7.getHp() << "\n\n";
//    Pokemon pichu("피츄", 30);//StackMemory
//    cout << pikachu.getName() << "\n";
//    cout << giratina->getName() << " - HP : " << giratina->getHp() << "\n";;
//    delete giratina;//힙 할당 해제
//    return 0;
//}