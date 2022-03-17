#include <iostream>

int main()
{
    int num = 100;

    //std : iostream에 선언된 객체들이 std 라는 namespace 에 정의되어 있다
    //      std에 있는 cout, endl을 사용하겟다

    //  << : 출력스트림 연산자
    std::cout << "hello world" << std::endl;
    std::cout << "인피니트";
    std::cout << "헬스케어" << std::endl;
    std::cout << "num : " << num << std::endl;
    std::cout << "A" << ", " << 3.14 << std::endl;

    return 0;

}