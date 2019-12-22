#pragma once
#include "abstractFilter.h"
#include "bwFilter.h"

class tresholdFilter : public abstractFilter {
public:
	tresholdFilter(int u, int l, int b, int r) {
		this->u = u;
		this->l = l;
		this->b = b;
		this->r = r;
	}
	virtual void applyFilter(image_data imgData);
private:
	int u;
	int l;
	int b;
	int r;
	int returnMedian(char arr[], int size, char elem);
};