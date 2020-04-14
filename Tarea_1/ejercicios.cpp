#include"ejercicios.h"

void ejercicio_5a(){

	std::cout<<"ejercicio 5a"<<std::endl;

        Integer a1;
        std::cout<<a1<<std::endl;

        Integer a2(3);
        std::cout<<a2<<std::endl;

        Integer a3(a2);
        std::cout<<a3<<std::endl;

        a1 = a3;
        std::cout<<a1<<std::endl;

        std::cout<<a1+7<<std::endl;

        std::cout<<(int)a2<<std::endl;

        Integer a4;
        std::cin>>a4;
        std::cout<<a4<<std::endl;

        Integer a5(2);
        int n = 2;
        std::cout<< (a5 ^ n) <<std::endl;

	a5 *= 7;
	std::cout<<a5<<std::endl;

	std::cout<<a5 * 5<<" "<<a5/5<<std::endl;

	std::cout<< (a5 > 7) <<std::endl;
	


}
void ejercicio_5b(){
	std::cout<<"ejercicio 5b"<<std::endl;

	Number<int> numi = 37;

	std::cout<< numi;
}
void ejercicio_6(){}
