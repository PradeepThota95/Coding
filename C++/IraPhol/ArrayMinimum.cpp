double minimum( double a[], const int sz) {
	
	double min = a[0];

	for(int i = 1; i < sz; ++ i)
		if (a[i] < min)
			min = a[i];

	return min;
}

double maximum( double a[], const int sz) {
	double max = a[0];

	for(int i = 1; i < sz;  ++ i)
		if(a[i] > max)
			max = a[i];

	return max;
}
