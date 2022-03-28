
#ifndef _DATA_
#define _DATA_

template<typename T>
class Data
{
private:
	T data;
public:
	Data(T n);

	void setData(T n);
	T getData();
};

template<typename T>
Data<T>::Data(T n) //T 타입이 템플릿으로 정의된 Data 클래스임을 알린다
{
	data = n;
}

template<typename T>
void Data<T>::setData(T n)
{
	data = n;
}

template<typename T>
T Data<T>::getData()
{
	return data;
}

#endif