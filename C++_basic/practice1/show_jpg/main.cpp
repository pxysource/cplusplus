/*********************************************************
 *10.假设已有的C语言版本的图片显示接口 display( )，
 * 请创建一个C++的工程，利用已有的C模块在开发板上显示 JPG 图片。
 * （C/C++混合编程、Qt/C++程序交叉编译）
**********************************************************/
#include <iostream>
#include "showjpg.h"

int main()
{
    Play_Jpg("/pxy/1.jpg", 1, 0, 0);
    return 0;
}