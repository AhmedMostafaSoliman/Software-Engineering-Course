#include <iostream>
#include <algorithm>
#include <climits>

#include "sales.h"

#define INF INT_MAX;
using namespace std;

namespace SALES {
	Sales::Sales(double arr[], int n) {
		double sum = 0.0;		
		double maximum = -INF;
		double minimum= INF;
		int mn = min(n, QUARTERS);
		for (int i = 0; i < mn; i++)
		{
			this->m_sales[i] = arr[i];
			sum += arr[i];
			maximum = max(maximum, arr[i]);
			minimum = min(minimum, arr[i]);
		}			
			

		this->m_average = sum/n;
		this->m_maximum = maximum;
		this->m_minimum = minimum;
	};

    void Sales::setSales() {
		cout << "Enter array of numbers: " << endl;
		for (int i = 0; i < QUARTERS; i++)
		{
			cin >> m_sales[i];
		}
	};


   void Sales::show() {
		cout << "Sales:" << endl;
		for (int i = 0; i < QUARTERS; i++) {
			cout << m_sales[i] << " ";
		}
		cout << endl;
		cout << "Average:" << m_average << endl<< "Max:" << m_maximum << endl<< "Min:" << m_minimum << endl;
	}

}