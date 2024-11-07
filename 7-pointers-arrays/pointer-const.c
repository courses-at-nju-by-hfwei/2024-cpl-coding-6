// Created by hfwei on 2024/11/6.
// Python tutor:
// https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28void%29%20%7B%0A%20%20//%20v%3A%20int,%20const%20int%0A%20%20//%20pv%3A%20int%20*,%20int%20*%20const%0A%20%20//%20const%20int%20*,%20const%20int%20*%20const,%20int%20const%20*,%20int%20const%20*%20const%0A%0A%20%20int%20var%20%3D%200%3B%0A%0A%20%20//%20int%20var_1%0A%20%20int%20var_1%20%3D%2010%3B%0A%0A%20%20int%20*ptr_1%20%3D%20%26var_1%3B%0A%20%20*ptr_1%20%3D%2020%3B%0A%20%20printf%28%22var_1%20%3D%20%25d%5Cn%22,%20var_1%29%3B%0A%20%20ptr_1%20%3D%20%26var%3B%0A%0A%20%20const%20int%20*ptr_1_1%20%3D%20%26var_1%3B%0A%20%20//%20%20*ptr_1_1%20%3D%2030%3B%20%20//%20Wrong%0A%20%20printf%28%22var_1%20%3D%20%25d%5Cn%22,%20var_1%29%3B%0A%20%20ptr_1%20%3D%20%26var%3B%0A%0A%20%20int%20*const%20ptr_1_2%20%3D%20%26var_1%3B%0A%20%20*ptr_1_2%20%3D%2040%3B%0A%20%20printf%28%22var_1%20%3D%20%25d%5Cn%22,%20var_1%29%3B%0A%20%20//%20%20*ptr_1_2%20%3D%20%26var%3B%20%20//%20Wrong%0A%0A%20%20//%20const%20int%20var_2%0A%20%20const%20int%20var_2%20%3D%20100%3B%0A%0A%20%20int%20*ptr_2%20%3D%20%26var_2%3B%0A%20%20*ptr_2%20%3D%20200%3B%0A%20%20printf%28%22var_2%20%3D%20%25d%5Cn%22,%20var_2%29%3B%0A%0A%20%20const%20int%20*ptr_2_1%20%3D%20%26var_2%3B%0A%20%20//%20%20*ptr_2_1%20%3D%20300%3B%0A%20%20printf%28%22var_2%20%3D%20%25d%5Cn%22,%20var_2%29%3B%0A%20%20const%20int%20*const%20ptr_2_2%20%3D%20%26var_2%3B%0A%20%20//%20%20*ptr_2_2%20%3D%20400%3B%0A%20%20printf%28%22var_2%20%3D%20%25d%5Cn%22,%20var_2%29%3B%0A%0A%20%20return%200%3B%0A%7D&cumulative=true&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

#include <stdio.h>

int main(void) {
  // int v; const int v;
  // int *pv;
  // int const *pv; const int *pv; int *const pv;  const int *const pv;

  return 0;
}