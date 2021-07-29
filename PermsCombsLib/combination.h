/*
 *  combination.h - the next combination algorithm
 *  Copyright (C) 2010 Martin Broadhurst 
 *  www.martinbroadhurst.com
 */

#ifndef COMBINATION_H
#define COMBINATION_H

#ifdef PermsCombsLib_EXPORTS  
#define PermsCombsLib_API __declspec(dllexport)   
#else  
#define PermsCombsLib_API __declspec(dllimport)   
#endif  
	
unsigned int MBnext_combination( unsigned int *ar, size_t n, unsigned int k );

#endif //COMBINATION_H