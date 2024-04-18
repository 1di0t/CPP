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

Pokemon::Pokemon() : name("모부기"), hp(10) {
    cout << "야생의 " << this->name << "가 나타났다\n";
}
Pokemon::Pokemon(string name, int hp) : name(name), hp(hp) {//initialize list
    cout << "야생의 " << this->name << "가 나타났다\n";
}
Pokemon::Pokemon(const Pokemon& pokemon) : name(pokemon.name), hp(pokemon.hp) {//reference var
    cout << "야생의 " << this->name << "가 나&%/타$났다\n";
}

Pokemon :: ~Pokemon() {
    cout << "야생의 " << this->name << "가 기절했다\n";
}
string Pokemon::getName() const {
    //name = "신현엉";//without const this code can run
    return name;
} //const 키워드 추가는 해당 함수 안에서 사이드 이펙트(side effect)(메모리값의 변경)가 발생하지 않음을 보장
int Pokemon::getHp() const { return hp; }
void Pokemon::setName(string name) { this->name = name; }
void Pokemon::attack() { cout << "공격\t"; }

Pokemon* test() {
    Pokemon mobugi;//default
    Pokemon* pulin = new Pokemon("푸린",10);//Memory Leak
    return pulin;
}//when test is end mobugi is dead


int main()
{
    //Pokemon* giratina = new Pokemon("기라티나", 10000);//HeapMemory
    //Pokemon pikachu("피카츄", 99);
    //Pokemon firy("파이리", 999);
    Pokemon* pulin = test();//호출과 소멸

    delete pulin;
    //Pokemon p7(pikachu);
    ////Pokemon p7 = pikachu;
    //p7.setName("피피카츄");
    //cout << "\n\n" << p7.getName();
    //cout << "\n\n" << p7.getHp() << "\n\n";
    //Pokemon pichu("피츄", 30);//StackMemory
    //cout << pikachu.getName() << "\n";
    //cout << giratina->getName() << " - HP : " << giratina->getHp() << "\n";;
    //delete giratina;//힙 할당 해제
    return 0;
}