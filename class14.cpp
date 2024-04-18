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
//Pokemon::Pokemon() : name("��α�"), hp(10) {
//    cout << "�߻��� " << this->name << "�� ��Ÿ����\n";
//}
//Pokemon::Pokemon(string name, int hp) : name(name), hp(hp) {//initialize list
//    cout << "�߻��� " << this->name << "�� ��Ÿ����\n";
//}
//Pokemon::Pokemon(const Pokemon& pokemon) : name(pokemon.name), hp(pokemon.hp) {//reference var
//    cout << "�߻��� " << this->name << "�� ��&%/Ÿ$����\n";
//}
//
//Pokemon :: ~Pokemon() {
//    cout << "�߻��� " << this->name << "�� �����ߴ�\n";
//}
//string Pokemon::getName() const {
//    //name = "������";//without const this code can run
//    return name;
//} //const Ű���� �߰��� �ش� �Լ� �ȿ��� ���̵� ����Ʈ(side effect)(�޸𸮰��� ����)�� �߻����� ������ ����
//int Pokemon::getHp() const { return hp; }
//void Pokemon::setName(string name) { this->name = name; }
//void Pokemon::attack() { cout << "����\t"; }
//
//Pokemon* test() {
//    Pokemon mobugi;//default
//    Pokemon* pulin = new Pokemon("Ǫ��", 10);//Memory Leak
//    return pulin;
//}//when test is end mobugi is dead
//
//
//int main()
//{
//    void* pulin = test();//ȣ��� �Ҹ�//can recive any type of data pointer
//
//    cout << (*(Pokemon*)pulin).getName() << "\n";//must define type of pointer
//    delete (Pokemon*)pulin;//also delete
//    pulin = nullptr;
//
//    return 0;
//}