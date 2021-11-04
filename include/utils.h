//
//  blc.h
//  fastISP
//
//  Created by lidunyu on 2021/11/03.
//  Create method prototypes required for matrix operations 
//
#ifndef __UTILS_H__
#define __UTILS_H__

#include <cmath>
#include <stdio.h>
#include<memory>
using ISP {
    template <typename T>
	class UTILS
			{
				public:
                    static void multi(T* C, const T* A, const T* B);
                    static void add(T* C, const T* A, const T* B);
                    static void dot(T* C, const T* A, const T* B);
                    static void divPerLine(T* C, const T* A, const T* Line);
                    static void invert(T* dst, const T* src);
                    static void transpose(T* dst, const T* src);
                    static void print(const T* C, const char* head = "Matrix:");
                    static void mulPerLine(T* C, const T* A, const T* Line);
                    static std::shared_ptr<Tensor> polyMulti(std::shared_ptr<T> A, std::shared_ptr<T> B);
                    static float matDet(const T* A);

			};

	 
} / namespace ISP
#endif // !__UTILS_H__
