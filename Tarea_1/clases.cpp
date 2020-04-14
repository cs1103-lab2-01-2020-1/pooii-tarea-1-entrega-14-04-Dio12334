#include"clases.h"
//Integer
Integer::Integer(){
        value = 0;
}
Integer::Integer(int value){
        this->value = value;
}
Integer::Integer(const Integer& other){
        this->value = other.value;
}
Integer Integer::operator=(const Integer& other){
        this->value = other.value;
}
Integer Integer::operator+(int value){
        return Integer(this->value + value);
}
Integer Integer::operator-(int value){
	return Integer(this->value - value);
}
Integer Integer::operator +=(int value){
	this->value += value;
}
Integer Integer::operator -=(int value){
	this->value -= value;
}
Integer Integer::operator*(int value){
	return Integer(this-> value * value);
}
Integer Integer::operator *=(int value){
	this->value *= value;
}
Integer Integer::operator/(int value){
	return Integer(this->value /value);
}
Integer Integer::operator^(int value){
        int temp = 1;
        for(int i = 0; i < value; i++){
                temp *= this->value;
        }
        return Integer(temp);
}
Integer::operator int(){
        return (int)this->value;
}
std::ostream& operator <<(std::ostream& os, const Integer& x){
        os<< x.value;
        return os;
}
std::istream& operator >>(std::istream& os, Integer& x){
        os>> x.value;
        return os;
}
bool Integer::operator >(int value){
	if(this->value > value)
		return true;
	return false;
}
bool Integer::operator >=(int value){
	if(this->value >= value)
		return true;
	return false;
}
bool Integer::operator <(int value){
	if(this->value < value)
		return true;
	return false;
}
bool Integer::operator <=(int value){
	if(this->value <= value)
		return true;
	return false;
}
bool Integer::operator ==(int value){
	if(this->value == value)
		return true;
	return false;
}
bool Integer::operator !=(int value){
	if(this->value != value)
		return true;
	return false;
}
Integer::~Integer(){}
//Integer
//
//
//number

template <typename T>

Number<T>::Number(): value(0){}

template <typename T>

Number<T>::Number(int value){
	this->value=value;
}

template <typename T>

Number<T>::Number(const Number<T>& other){
	this->value(value);
}

template <typename T>

Number<T> Number<T>::operator=(const Number<T>& other){
        this->value = other.value;	
}

template <typename T>

Number<T> Number<T>::operator+(int value){
        return Number<T>(this->value + value);
}

template <typename T>

Number<T> Number<T>::operator-(int value){
        return Number<T>(this->value - value);
}

template <typename T>

Number<T> Number<T>::operator +=(int value){
        this->value += value;
}

template <typename T>

Number<T> Number<T>::operator -=(int value){
        this->value -= value;
}

template <typename T>

Number<T> Number<T>::operator*(int value){
        return Number<T>(this-> value * value);
}

template <typename T>

Number<T> Number<T>::operator *=(int value){
        this->value *= value;
}

template <typename T>

Number<T> Number<T>::operator/(int value){
        return Number<T>(this->value /value);
}

template <typename T>

Number<T> Number<T>::operator^(int value){
        int temp = 1;
        for(int i = 0; i < value; i++){
                temp *= this->value;
        }
        return Number<T>(temp);
}

template <typename T>

Number<T>::operator int(){
        return (int)this->value;
}

template <typename U>

std::ostream& operator <<(std::ostream& os, const Number<U>& x){
	os<< x.value;
        	return os;
}

template <typename U>

std::istream& operator >>(std::istream& os, Number<U>& x){
	os>> x.value;
		return os;
}

template <typename T>

bool Number<T>::operator >(int value){
        if(this->value > value)
                return true;
        return false;

}

template <typename T>

bool Number<T>::operator >=(int value){
        if(this->value >= value)
                return true;
        return false;

}

template <typename T>

bool Number<T>::operator <(int value){
        if(this->value < value)
                return true;
        return false;

}

template <typename T>

bool Number<T>::operator <=(int value){
        if(this->value <= value)
                return true;
        return false;

}

template <typename T>

bool Number<T>::operator ==(int value){
        if(this->value == value)
                return true;
        return false;

}

template <typename T>

bool Number<T>::operator !=(int value){
        if(this->value != value)
                return true;
        return false;

}

template <typename T>

Number<T>::~Number(){}


























