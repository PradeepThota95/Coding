double average(const double a[], const int sz) {
	double sum = 0.0; 
	for (int i = 0; i < sz; ++ i)
		sum += a[i];

	return sum/sz;
}
