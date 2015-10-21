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
		m_n = n;
		int mn = min(n, QUARTERS);
		for (int i = 0; i < mn; i++)
		{
			this->m_sales[i] = arr[i];
			sum += arr[i];
			maximum = max(maximum, arr[i]);
			minimum = min(minimum, arr[i]);
		}			
			

		m_average = sum/n;
		m_maximum = maximum;
		m_minimum = minimum;
	};

    void Sales::setSales(int num) {
		if (num > 4) cout << "INVALID" << endl;
		else
		{
			cout << "Enter numbers: " << endl;
			double temp_arr[QUARTERS];
			for (int i = 0; i < num; i++)
			{
				cin >> temp_arr[i];
			}
			Sales tmp(temp_arr, num);
			*this = tmp;
		}
	};


   void Sales::show() {
		cout << "Sales:" << endl;
		int mn = min(m_n, QUARTERS);
		for (int i = 0; i < mn; i++) {
			cout << m_sales[i] << " ";
		}
		cout << endl;
		cout << "Average: " << m_average << endl<< "Max: " << m_maximum << endl<< "Min: " << m_minimum << endl;
	}

}
