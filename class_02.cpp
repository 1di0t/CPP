///*************************************************************
// * ��ü ���� ���α׷��ֿ��� Ŭ������ ����ϴ� ���α׷�       *
// *************************************************************/
//#include <iostream>
//using namespace std;
//
///************************************************************
// * Ŭ���� ����                                              *
// * ������ ����� ��� �Լ��� ����                           *
// ************************************************************/
//class Circle
//{
//
//private:
//    double radius;
//public:
//    double getRadius() {
//        return radius;
//    }
//    double getArea() {
//        const double PI = 3.14;
//        return (PI * radius * radius);
//    }
//    double getPerimeter() {
//        const double PI = 3.14;
//        return (2 * PI * radius);
//    }
//    void setRadius(double value) {
//        radius = value;
//    }
//
//    Circle() {//�⺻������
//        cout << "�⺻\n";
//    }
//    Circle(double r) {//�ź�������
//        cout << "\n\n�Ż���\n";
//        radius = r;
//    }
//};
//
///********************************************************
// * ���ø����̼� �κ�                                    *
// * Ŭ������ �ν��Ͻ�ȭ�ؼ� ��ü�� ����� Ȱ��           *
//*********************************************************/
//int main()
//{
//    // ù ��° circle ��ü�� ����� ��� �Լ� ȣ��
//    cout << "Circle 1" << endl;
//    Circle circle1;
//    circle1.setRadius(10.0);
//    cout << "������: " << circle1.getRadius() << endl;
//    cout << "����: " << circle1.getArea() << endl;
//    cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;
//    // �� ��° circle ��ü�� ����� ��� �Լ� ȣ��  
//    cout << "Circle 2" << endl;
//    Circle circle2;
//    circle2.setRadius(20.0);
//    cout << "������: " << circle2.getRadius() << endl;
//    cout << "����: " << circle2.getArea() << endl;
//    cout << "�ѷ�: " << circle2.getPerimeter();
//    Circle circleTrd(4);
//    cout << "������: " << circleTrd.getRadius() << endl;
//    cout << "����: " << circleTrd.getArea() << endl;
//    cout << "�ѷ�: " << circleTrd.getPerimeter();
//
//    return 0;
//}