#ifndef CLASES_H
#define CLASES_H

#include"lib.h"

class Integer{
        private:
                int value;
        public:
                Integer();
                Integer(int value);
                Integer(const Integer& other);
                Integer operator=(const Integer& other);
                Integer operator+(int value);
		Integer operator-(int value);
		Integer operator +=(int value);
		Integer operator -=(int value);
		Integer operator*(int value);
		Integer operator *=(int value);
		Integer operator/(int value);
                Integer operator^(int value);
                operator int();
                friend std::ostream& operator <<(std::ostream& os, const Integer&);
                friend std::istream& operator >>(std::istream& os, Integer&);
		bool operator >(int value);
		bool operator >=(int value);
		bool operator <(int value);
		bool operator <=(int value);
		bool operator ==(int value);
		bool operator !=(int value);
		~Integer();
};

template <typename T>

class Number{
        private:
                T value;
        public:
                Number();
                Number(int value);
                Number(const Number<T>& other);
                Number<T> operator=(const Number<T>& other);
                Number<T> operator+(int value);
                Number<T> operator-(int value);
                Number<T> operator +=(int value);
                Number<T> operator -=(int value);
                Number<T> operator*(int value);
                Number<T> operator *=(int value);
                Number<T> operator/(int value);
                Number<T> operator^(int value);
                operator int();
		template <typename U>
                friend std::ostream& operator <<(std::ostream& os, const Number<U>&);
		template <typename U>
                friend std::istream& operator >>(std::istream& os, Number<U>&);
                bool operator >(int value);
                bool operator >=(int value);
                bool operator <(int value);
                bool operator <=(int value);
                bool operator ==(int value);
                bool operator !=(int value);
		~Number();


};

namespace utec{
	template <typename T>
	
	class vector{
		private:

		public:
	};
}

#endif
