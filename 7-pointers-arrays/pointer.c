// Created by hengxin on 11/06/24.
// pythontutor:
// https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0A%23define%20PI%203.14%0A%0Aint%20main%28void%29%20%7B%0A%20%20//%20https%3A//intellij-support.jetbrains.com/hc/en-us/community/posts/115000740490-Where-did-the-black-windows-go-%3Fpage%3D1%23community_comment_115000619510%0A%20%20//%20%20setbuf%28stdout,%20NULL%29%3B%0A%0A%20%20/**********%20On%20radius_1%20**********/%0A%20%20//%20type%3A%20int%3B%20value%3A%20100%3B%20address%3A%20%26radius_1%20%28%26%3A%20address-of%20operator%29%0A%20%20int%20radius_1%20%3D%20100%3B%0A%0A%20%20printf%28%22radius_1%20%3D%20%25d%5Cn%22,%20radius_1%29%3B%0A%20%20printf%28%22%26radius_1%20%3D%20%25p%5Cn%22,%20%26radius_1%29%3B%0A%0A%20%20//%20lvalue%20and%20rvalue%0A%20%20radius_1%20%3D%20200%3B%0A%20%20//%20lvalue%20conversion%20%3D%3E%20rvalue%0A%20%20double%20circumference%20%3D%202%20*%20PI%20*%20radius_1%3B%0A%20%20printf%28%22circumference%20%3D%20%25f%5Cn%22,%20circumference%29%3B%0A%20%20/**********%20On%20radius_1%20**********/%0A%0A%20%20/**********%20On%20ptr_radius_1%20**********/%0A%20%20//%20type%3A%20int%20*%3B%20value%3A%20%26radius_1%0A%20%20int%20*ptr_radius_1%20%3D%20%26radius_1%3B%0A%0A%20%20printf%28%22%26ptr_radius_1%20%3D%20%25p%5Cn%22,%20%26ptr_radius_1%29%3B%0A%20%20/**********%20On%20ptr_radius_1%20**********/%0A%0A%20%20/**********%20On%20ptr_radius_1%20as%20lvalue%20and%20rvalue%20**********/%0A%20%20int%20radius_2%20%3D%201000%3B%0A%20%20int%20*ptr_radius_2%20%3D%20%26radius_2%3B%0A%0A%20%20ptr_radius_1%20%3D%20ptr_radius_2%3B%0A%20%20*ptr_radius_2%20%3D%202000%3B%0A%20%20printf%28%22radius_1%20%3D%20%25d%5Cn%22,%20*ptr_radius_1%29%3B%0A%20%20/**********%20On%20ptr_radius_1%20as%20lvalue%20and%20rvalue%20**********/%0A%0A%20%20/**********%20On%20*ptr_radius_1%20**********/%0A%20%20//%20*%3A%20indirection/dereference%20operator%0A%20%20//%20*ptr_radius_1%20behaves%20like%20radius_1%0A%20%20*ptr_radius_1%20%3D%20200%3B%0A%20%20printf%28%22radius_1%20%3D%20%25d%5Cn%22,%20radius_1%29%3B%0A%20%20circumference%20%3D%202%20*%20PI%20*%20%28*ptr_radius_1%29%3B%0A%20%20/**********%20On%20*ptr_radius_1%20**********/%0A%0A%20%20int%20v%20%3D%20100%3B%0A%20%20int%20*pv%20%3D%20%26v%3B%0A%20%20printf%28%22pv%20%3A%20%25p%5Cn%20*pv%20%3A%20%25d%5Cn%22,%20pv,%20*pv%29%3B%0A%20%20pv%20%3D%20%26pv%3B%0A%20%20printf%28%22pv%20%3A%20%25p%5Cn%22,%20pv%29%3B%0A%0A%20%20return%200%3B%0A%7D&cumulative=true&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

#include <stdio.h>

#define PI 3.14

int main(void) {
  // https://intellij-support.jetbrains.com/hc/en-us/community/posts/115000740490-Where-did-the-black-windows-go-?page=1#community_comment_115000619510
  //  setbuf(stdout, NULL);

  /********** On radius_1 **********/
  // type: int; value: 100; address: &radius_1 (&: address-of)
  int radius_1 = 100;

  printf("radius_1 = %d\n", radius_1);
  printf("&radius_1 = %p\n", &radius_1);

  radius_1 = 200;
  // lvalue conversion => rvalue
  double circumference = 2 * PI * radius_1;
  printf("circumference = %f\n", circumference);
  /********** On radius_1 **********/

  /********** On ptr_radius_1 **********/
  // type: int*; value: &radius_1
  int *ptr_radius_1 = &radius_1;
  printf("&ptr_radius_1 = %p\n", &ptr_radius_1);
  /********** On ptr_radius_1 **********/

  /********** On ptr_radius_1 as lvalue and rvalue **********/
  int radius_2 = 200;
  int *ptr_radius_2 = &radius_2;
  // int *;
  ptr_radius_1 = ptr_radius_2;
  /********** On ptr_radius_1 as lvalue and rvalue **********/

  /********** On *ptr_radius_1 **********/
  // *ptr_radius_1 behaves like radius_1
  // ptr_radius_1: int *
  // radius_1 = 300;
  *ptr_radius_1 = 300;
  printf("radius_1 = %d\n", radius_1);
  printf("radius_2 = %d\n", radius_2);
  /********** On *ptr_radius_1 **********/

  int v = 100;
  int *pv = &v;
  pv = &pv;

  return 0;
}