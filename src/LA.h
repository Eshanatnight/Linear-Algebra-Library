#ifndef LINEAR_ALGEBRA_LIBRARY_LA_H
#define LINEAR_ALGEBRA_LIBRARY_LA_H

#include <cmath>
// #include <initilaizer_list>


// Linear Interpolation Helper Fuctions
double lerp(double a, double b, double t)
{
    return a + (b - a) * t;
}
float lerp(float a, float b, float t)
{
    return a + (b - a) * t;
}

// Start of LA Namespace
namespace LA
{
    // Vector Of 2 Diamensions
    template<typename T>
    struct vector_2D
    {
        T x, y;

        explicit vector_2D() : x(0), y(0)
        {}

        explicit vector_2D(T value) : x(value), y(value)
        {}

        // ! Conversion Between 2D<ini> <-> 2D<float> <-> 2D<double> is unsafe
        // Implementation revoked.

        explicit  vector_2D(T x, T y): x(x), y(y)
        {}

        explicit vector_2D(const vector_2D<T>& v)
        {
            x = v.x;
            y = v.y;
        }

        // !
        // Todo: Add constructors to create vec2D from vec3D and vec4D ?
        // !

        // TODO: std::initilaizer_list support
        /*
        explicit vector_2D(std::initializer_list<T> list)
        {
            if (list.size() == 2)
            {
                x = *list.begin();
                y = *(list.begin() + 1);
            }
            else
            {
                x = 0;
                y = 0;
            }
        }
        */

        // Operator Overloads
        // Addition Operator
        vector_2D<T> operator+(const vector_2D<T>& v) const
        {
            return vector_2D<T>(x + v.x, y + v.y);
        }

        // Substation Operator
        vector_2D<T> operator-(const vector_2D<T>& v) const
        {
            return vector_2D<T>(x - v.x, y - v.y);
        }

        // Multiplication Operator
        vector_2D<T> operator*(const vector_2D<T>&v)
        {
            return vector_2D<T>(x * v.x, y * v.y);
        }

        // Division Operator
        vector_2D<T> operator/(const vector_2D<T>& v)
        {
            return vector_2D<T>(x / v.x, y / v.y);
        }

        // Square Root Operator
        vector_2D<T> sqrt()
        {
            return vector_2D<T>(sqrtf(x), sqrtf(y));
        }

        // Power Fuction
        vector_2D<T> pow(const vector_2D<T>& exponent)
        {
            return vector_2D<T>(powf(x, exponent.x), powf(y, exponent.y));
        }

        // Overload the power function for scalar
        vector_2D<T> pow(const T& exponent)
        {
            return vector_2D<T>(powf(x, exponent), powf(y, exponent));
        }

        // Trigonomertic Functions
        vector_2D<T> sin()
        {
            return vector_2D<T>(sin(x), sin(y));
        }

        vector_2D<T> cos()
        {
            return vector_2D<T>(cos(x), cos(y));
        }

        // Minimum and Maximum Functions
        vector_2D<T> min(const vector_2D<T>& other)
        {
            return vector_2D<T>(fmin(x, other.x), fmin(y, other.y));
        }

        vector_2D<T> max(const vector_2D<T> other)
        {
            return vector_2D<T>(fmax(x, other.x), fmax(y, other.y));
        }

        // Linear Interpolation
        vector_2D<T> lerp(const vector_2D<T>& other, const vector_2D<T>& t)
        {
            return vector_2D<T>(lerp(x, other.x, t.y), lerp(y, other.y, t.y));
        }

        // Floor and Ceil Functions
        vector_2D<T> floor()
        {
            return vector_2D<T>(floor(x), floor(y));
        }

        vector_2D<T> ceil()
        {
            return vector_2D<T>(ceil(x), ceil(y));
        }

        double squareLenght()
        {
            return x * x + y * y;
        }

        double lenght()
        {
            return sqrt(squareLenght());
        }

    }; // End of vector_2D

    // Vector Of 3 Diamensions
    template<typename T>
    struct vector_3D
    {
        T x, y, z;

        explicit vector_3D() : x(0), y(0), z(0)
        {}

        explicit vector_3D(T x, T y, T z) : x(x), y(y), z(z)
        {}

        explicit vector_3D(const vector_3D<T> &v)
        {
            x = v.x;
            y = v.y;
            z = v.z;
        }

        explicit vector_3D(const T& val)
        : x(val), y(val), z(val)
        {}

        // TODO: std::initializer_list support
        /*
        explicit vector_3D(std::initializer_list<T> list)
        {
            if (list.size() == 3)
            {
                x = *list.begin();
                y = *(list.begin() + 1);
                z = *(list.begin() + 2);
            }
            else
            {
                x = 0;
                y = 0;
                z = 0;
            }
        }
        */

        // Operator Overloads
        // Addition Operator
        vector_3D<T> operator+(const vector_3D<T>& v) const
        {
            return vector_3D<T>(x + v.x, y + v.y, z + v.z);
        }

        // Substation Operator
        vector_3D<T> operator-(const vector_3D<T>& v) const
        {
            return vector_3D<T>(x - v.x, y - v.y, z - v.z);
        }

        // Multiplication Operator
        vector_3D<T> operator*(const vector_3D<T>& v)
        {
            return vector_3D<T>(x * v.x, y * v.y, z * v.z);
        }

        // Division Operator
        vector_3D<T> operator/(const vector_3D<T>& v)
        {
            return vector_3D<T>(x / v.x, y / v.y, z / v.z);
        }

        // Square Root Operator
        vector_3D<T> sqrt()
        {
            return vector_3D<T>(sqrtf(x), sqrtf(y), sqrtf(z));
        }

        // Power Function
        vector_3D<T> pow(const vector_3D<T>& exponent)
        {
            return vector_3D<T>(powf(x, exponent.x), powf(y, exponent.y), powf(z, exponent.z));
        }

        // Power Function for scalar
        vector_3D<T> pow(const T& exponent)
        {
            return vector_3D<T>(powf(x, exponent), powf(y, exponent), powf(z, exponent));
        }

        // Trigonometric Functions
        vector_3D<T> sin()
        {
            return vector_3D<T>(sin(x), sin(y), sin(z));
        }

        vector_3D<T> cos()
        {
            return vector_3D<T>(cos(x), cos(y), cos(z));
        }

        // Min and Max Fuctions
        vector_3D<T> min(const vector_3D<T>& other)
        {
            return vector_3D<T>(fmin(x, other.x), fmin(y, other.y), fmin(z, other.z));
        }

        vector_3D<T> max(const vector_3D<T>& other)
        {
            return vector_3D<T>(fmax(x, other.x), fmax(y, other.y), fmax(z, other.z));
        }

        // Linear Interpolation
        vector_3D<T> lerp(const vector_3D<T>& other, const vector_3D<T>& t)
        {
            return vector_3D<T>(lerp(x, other.x, t.x), lerp(y, other.y, t.y), lerp(z, other.z, t.z));
        }

        // Floor and Ceil Functions
        vector_3D<T> floor()
        {
            return vector_3D<T>(floor(x), floor(y), floor(z));
        }

        vector_3D<T> ceil()
        {
            return vector_3D<T>(ceil(x), ceil(y), ceil(z));
        }

        double squareLenght()
        {
            return x * x + y * y + z * z;
        }

        double lenght()
        {
            return sqrt(squareLenght());
        }



    };   // End of vector_3D

    template<typename T>
    struct vector_4D
    {
        T x, y, z, w;

        explicit  vector_4D() : x(0), y(0), z(0), w(0)
        {}

        explicit vector_4D(T x = 0, T y = 0, T z = 0, T w = 0) : x(x), y(y), z(z), w(w)
        {}

        explicit vector_4D(const vector_4D<T> &v)
        {
            x = v.x;
            y = v.y;
            z = v.z;
            w = v.w;
        }

        // TODO: std::initializer_list support
        /*
        explicit vector_4D(std::initializer_list<T> list)
        {
            if (list.size() == 4)
            {
                x = *list.begin();
                y = *(list.begin() + 1);
                z = *(list.begin() + 2);
                w = *(list.begin() + 3);
            }
            else
            {
                x = 0;
                y = 0;
                z = 0;
                w = 0;
            }
         */


        // Operator Overloads
        // Addition Operator
        vector_4D<T> operator+(const vector_4D<T>& v) const
        {
            return vector_4D<T>(x + v.x, y + v.y, z + v.z, w + v.w);
        }

        // Substation Operator
        vector_4D<T> operator-(const vector_4D<T>& v) const
        {
            return vector_4D<T>(x - v.x, y - v.y, z - v.z, w - v.w);
        }

        // Multiplication Operator
        vector_4D<T> operator*(const vector_4D<T>& v)
        {
            return vector_4D<T>(x * v.x, y * v.y, z * v.z, w * v.w);
        }

        // Division Operator
        vector_4D<T> operator/(const vector_4D<T>& v)
        {
            return vector_4D<T>(x / v.x, y / v.y, z / v.z, w / v.w);
        }

        // Square Root Operator
        vector_4D<T> sqrt()
        {
            return vector_4D<T>(sqrtf(x), sqrtf(y), sqrtf(z), sqrtf(w));
        }

        // Power Function
        vector_4D<T> pow(const vector_4D<T>& exponent)
        {
            return vector_4D<T>(powf(x, exponent.x), powf(y, exponent.y), powf(z, exponent.z), powf(w, exponent.w));
        }

        // Power Function Overload For scalars
        vector_4D<T> pow(const T& exponent)
        {
            return vector_4D<T>(powf(x, exponent), powf(y, exponent), powf(z, exponent), powf(w, exponent));
        }

        // Triogonometric Functions
        vector_4D<T> sin()
        {
            return vector_4D<T>(sin(x), sin(y), sin(z), sin(w));
        }

        vector_4D<T> cos()
        {
            return vector_4D<T>(cos(x), cos(y), cos(z), cos(w));
        }

        // Min and Max Fuctions
        vector_4D<T> min(const vector_4D<T>& other)
        {
            return vector_4D<T>(fmin(x, other.x), fmin(y, other.y), fmin(z, other.z), fmin(w, other.w));
        }

        vector_4D<T> max(const vector_4D<T>& other)
        {
            return vector_4D<T>(fmax(x, other.x), fmax(y, other.y), fmax(z, other.z), fmax(w, other.w));
        }

        // Linear Interpolation
        vector_4D<T> lerp(const vector_4D<T>& other, const vector_4D<T>& t)
        {
            return vector_4D<T>(lerp(x, other.x, t.x), lerp(y, other.y, t.y), lerp(z, other.z, t.z), lerp(w, other.w, t.w));
        }

        // Floor and Ceil Functions
        vector_4D<T> floor()
        {
            return vector_4D<T>(floor(x), floor(y), floor(z), floor(w));
        }

        vector_4D<T> ceil()
        {
            return vector_4D<T>(ceil(x), ceil(y), ceil(z), ceil(w));
        }

        double squareLenght()
        {
            return x * x + y * y + z * z + w * w;
        }

        double lenght()
        {
            return sqrt(squareLenght());
        }

    };  // End Of Vector_4d

}; // End of namespace LA




#endif //LINEAR_ALGEBRA_LIBRARY_LA_H
