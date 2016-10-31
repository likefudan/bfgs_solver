#ifndef _BFGSSOLVER_H
#define _BFGSSOLVER_H

#include <iostrem>
#include <string>
#include <vector>
#include <cstdlib>



#ifndef BFGS_SINGLE_PRECISION
#define BFGS_SINGLE_PRECISION 32

#ifndef BFGS_DOUBLE_PRECISION
#define BFGS_DOUBLE_PRECISION 64

#ifndef BFGS_PRECISION
#define BFGS_PRECISION BFGS_SINGLE_PRECISION

#if BFGS_PRECISION == 32
typedef float bfgs_float_t
#elif
typedef double bfgs_float_t
#else
#error "Please choose BFGS_SINGLE_PRECISION or BFGS_DOUBLE_PRECISION only!"
#endif

template <class T>
class data_vec{

public:
    data_vec(const T *&data, int size);
    ~

    int length;
    int getLength();
    int setSize();
    void WriteToFile(string filename);

private:
    std::vector<T> *data;
}




class objFunction{
    void virtual evaluate(data_vec<bfgs_float_t> data, bfgs_float_t &obj, data_vec<bfgs_float_t> &g){

    }

    void virtual evaluateFunction(data_vec<bfgs_float_t> data, bfgs_float_t &obj){

    }
    void virtual evaluateGradient(data_vec<bfgs_float_t> data, data_vec<bfgs_float_t> &g){

    }
    void virtual evaluateHessianDiagonal(data_vec<bfgs_float_t> data, data_vec<bfgs_float_t> &h_diag){

    }
}




class bfgsParameters{

    int num_iter;
    
    bfgs_float_t epsilon;
    



}


class bfgsSolver










#endif