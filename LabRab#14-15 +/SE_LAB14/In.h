#pragma once
#define IN_MAX_LEN_TEXT 1024*1024	
#define IN_CTDE_ENDL '\n'

//	      0       1      2      3      4      5      6      7      8      9      A      B      C      D      E      F
#define IN_CTDE_TABLE {\
/*0*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T,   '|', IN::T, IN::T, IN::I, IN::T, IN::T,\
/*1*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
/*2*/	IN::I,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
/*3*/	IN::T,	IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
/*4*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,\
/*5*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::I,	IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,\
/*6*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,\
/*7*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,\
/*8*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*9*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::T,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*A*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*B*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*C*/   IN::F,  IN::F, IN::I, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
/*D*/	IN::F,  IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*E*/   IN::F,	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,\
/*F*/   IN::F,  IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F \
}

namespace In
{
	struct IN
	{
		enum { T = 1024, F = 2048, I = 4096, };
		int size; // размер текста

		int lines; //кол-во строк в тексте

		int ignor; //кол-во игнорируемых символов

		unsigned char* text; //указатель на массив байт, содержащий текст

		int code[256] = IN_CTDE_TABLE; //классификация символов на основе таблицы
	};
	IN getin(wchar_t infile[]); //чтение входных данных из файла
}