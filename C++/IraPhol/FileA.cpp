//static int foo (int i) {
//	return (i * 3);
//}

 int foo (int i) {
	return (i * 3);
}
inline int goo (int i) {
	return i * foo (i);
}


