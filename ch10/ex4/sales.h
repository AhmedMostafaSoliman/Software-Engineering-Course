namespace SALES {
	class Sales{
	private:
		static const int QUARTERS = 4;
		double m_sales[QUARTERS];
		double m_average;
		double m_maximum;
		double m_minimum;
		int m_n;
	public:
		Sales(double arr[], int n);
		void setSales(int num);
		void show();
	};
}
