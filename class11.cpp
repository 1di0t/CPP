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
//Pokemon :: Pokemon() : name("모부기"), hp(10){
//    cout << "야생의 " << this->name << "가 나타났다\n"; 
//}
//Pokemon :: Pokemon(string name, int hp) : name(name), hp(hp) {//initialize list
//    cout << "야생의 " << this->name << "가 나타났다\n";
//}
//Pokemon :: Pokemon(const Pokemon& pokemon) : name(pokemon.name), hp(pokemon.hp) {//reference var
//    cout << "야생의 " << this->name << "가 나&%/타$났다\n";
//}
//
//Pokemon :: ~Pokemon() {
//    cout << "야생의 " << this->name << "가 기절했다\n";
//}
//string Pokemon ::getName() { return name; }
//int Pokemon :: getHp() { return hp; }
//void Pokemon :: setName(string name) { this->name = name; }
//void Pokemon :: attack() {cout << "공격\t";}
//
//void test() {
//    Pokemon pizon;//default
//    //Pokemon* pulin = new Pokemon("푸린",10);
//}
//
//
//int main()
//{
//    Pokemon* giratina = new Pokemon("기라티나", 10000);//HeapMemory
//    Pokemon pikachu("피카츄", 99);
//    Pokemon firy("파이리", 999);
//    test();//호출과 소멸
//
//
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