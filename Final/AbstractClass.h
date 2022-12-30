#pragma once
#include <iostream>
#include <string>
#include "Windows.h"
using namespace std;

class AbstractClass
{
	public:
		struct node // структура для представления узлов дерева
		{
			int key;
			unsigned char height;
			node* left;
			node* right;
			node(int k) { key = k; left = right = 0; height = 1; }
		};

		virtual node* insert(node* p, int k) = 0;
		virtual node* remove(node* p, int k) = 0;
		virtual bool search(node* p, int k) = 0;
};

