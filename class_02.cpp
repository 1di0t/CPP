///*************************************************************
// * 객체 지향 프로그래밍에서 클래스를 사용하는 프로그램       *
// *************************************************************/
//#include <iostream>
//using namespace std;
//
///************************************************************
// * 클래스 정의                                              *
// * 데이터 멤버와 멤버 함수를 선언                           *
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
//    Circle() {//기본생성자
//        cout << "기본\n";
//    }
//    Circle(double r) {//매변생성자
//        cout << "\n\n매생이\n";
//        radius = r;
//    }
//};
//
///********************************************************
// * 애플리케이션 부분                                    *
// * 클래스를 인스턴스화해서 객체를 만들고 활용           *
//*********************************************************/
//int main()
//{
//    // 첫 번째 circle 객체를 만들고 멤버 함수 호출
//    cout << "Circle 1" << endl;
//    Circle circle1;
//    circle1.setRadius(10.0);
//    cout << "반지름: " << circle1.getRadius() << endl;
//    cout << "넓이: " << circle1.getArea() << endl;
//    cout << "둘레: " << circle1.getPerimeter() << endl << endl;
//    // 두 번째 circle 객체를 만들고 멤버 함수 호출  
//    cout << "Circle 2" << endl;
//    Circle circle2;
//    circle2.setRadius(20.0);
//    cout << "반지름: " << circle2.getRadius() << endl;
//    cout << "넓이: " << circle2.getArea() << endl;
//    cout << "둘레: " << circle2.getPerimeter();
//    Circle circleTrd(4);
//    cout << "반지름: " << circleTrd.getRadius() << endl;
//    cout << "넓이: " << circleTrd.getArea() << endl;
//    cout << "둘레: " << circleTrd.getPerimeter();
//
//    return 0;
//}