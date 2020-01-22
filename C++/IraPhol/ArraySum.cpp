int sum(const int a[], const int sz) {
	int sum = 0;
	for(int i = 0; i < sz; ++ i)
		sum += a[i];

	return sum;
}
