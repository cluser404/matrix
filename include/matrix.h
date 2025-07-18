#ifndef MATRIX_H
#define MATRIX_H


#ifdef _WIN32
      #ifdef MATRIX_EXPORTS
            #define MATRIX_API __declspec(dllexport)
      #else
            #define MATRIX_API __declspec(dllimport)
      #endif
#else
      #define MATRIX_API
#endif


MATRIX_API double **create_matrix(size_t row, size_t column);


#endif




/*
      _                     
     | |                    
  ___| |_   _ ___  ___ _ __ 
 / __| | | | / __|/ _ \ '__|
| (__| | |_| \__ \  __/ |   
 \___|_|\__,_|___/\___|_|

7.17.2025
matrix library

*/
