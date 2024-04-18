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
//    string getName() const;
//    int getHp() const;
//    void setName(string name);
//
//};
//
//Pokemon::Pokemon() : name("모부기"), hp(10) {
//    cout << "야생의 " << this->name << "가 나타났다\n";
//}
//Pokemon::Pokemon(string name, int hp) : name(name), hp(hp) {//initialize list
//    cout << "야생의 " << this->name << "가 나타났다\n";
//}
//Pokemon::Pokemon(const Pokemon& pokemon) : name(pokemon.name), hp(pokemon.hp) {//reference var
//    cout << "야생의 " << this->name << "가 나&%/타$났다\n";
//}
//
//Pokemon :: ~Pokemon() {
//    cout << "야생의 " << this->name << "가 기절했다\n";
//}
//string Pokemon::getName() const {
//    //name = "신현엉";//without const this code can run
//    return name;
//} //const 키워드 추가는 해당 함수 안에서 사이드 이펙트(side effect)(메모리값의 변경)가 발생하지 않음을 보장
//int Pokemon::getHp() const { return hp; }
//void Pokemon::setName(string name) { this->name = name; }
//void Pokemon::attack() { cout << "공격\t"; }
//
//Pokemon* test() {
//    Pokemon mobugi;//default
//    Pokemon* pulin = new Pokemon("푸린", 10);//Memory Leak
//    return pulin;
//}//when test is end mobugi is dead
//
//
//int main()
//{
//    void* pulin = test();//호출과 소멸//can recive any type of data pointer
//
//    cout << (*(Pokemon*)pulin).getName() << "\n";//must define type of pointer
//    delete (Pokemon*)pulin;//also delete
//    pulin = nullptr;
//
//    return 0;
//}