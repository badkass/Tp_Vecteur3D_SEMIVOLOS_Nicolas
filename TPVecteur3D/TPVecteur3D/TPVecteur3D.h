#include <iostream>
using namespace std;

template <class T> class vect3D {
	T m_x, m_y, m_z;

public:
	vect3D(T x = 0, T y = 0, T z = 0);
	vect3D(vect3D& vect);

	vect3D<T> addition(const vect3D& vect);
	vect3D<T> soustraction(const vect3D& vect);
	vect3D<T> prodScal(const T scale);
	T prodScalVect(const vect3D& vect);
	vect3D<T> prodVect(const vect3D& vect);
	
	//fonction amie co�ncide
	friend bool coincide(const vect3D& v1, const vect3D& v2)
	{
		if (v1.m_x == v2.m_x && v1.m_y == v2.m_y && v1.m_z == v2.m_z) {
			return true;
		}
		else {
			return false;
		}
	}
	void affiche() const;
};

//template du vecteur 3d
template<class T>
inline vect3D<T>::vect3D(T x, T y, T z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}


template<class T>
inline vect3D<T>::vect3D(vect3D& vect)
{
	m_x = vect.m_x;
	m_y = vect.m_y;
	m_z = vect.m_z;
}

//addition de coordonn�es
template<class T>
inline vect3D<T> vect3D<T>::addition(const vect3D& vect)
{
	vect3D<T> new_vect(m_x + vect.m_x, m_y + vect.m_y, m_z + vect.m_z);
	return new_vect;
}

//soustraction de coordonn�es
template<class T>
inline vect3D<T> vect3D<T>::soustraction(const vect3D& vect)
{
	vect3D<T> new_vect(m_x - vect.m_x, m_y - vect.m_y, m_z - vect.m_z);
	return new_vect;
}

//produit scalaire des coordonn�es
template<class T>
inline vect3D<T> vect3D<T>::prodScal(const T scale)
{
	vect3D<T> new_vect(m_x * scale, m_y * scale, m_z * scale);
	return new_vect;
}

//produit scalaire de vecteurs
template<class T>
inline T vect3D<T>::prodScalVect(const vect3D& vect)
{
	return m_x * vect.m_x + m_y * vect.m_y + m_z * vect.m_z;
}

//produit des coordonn�es
template<class T>
inline vect3D<T> vect3D<T>::prodVect(const vect3D& vect)
{
	vect3D<T> new_vect(m_y * vect.m_z - m_z * vect.m_y, m_z * vect.m_x - m_z * vect.m_z, m_x * vect.m_y - m_y * vect.m_x);
	return new_vect;
}

//fonction affiche
template<class T>
inline void vect3D<T>::affiche() const
{
	cout << "Coordonn�es : " << m_x << " " << m_y << " " << m_z << endl;
}

