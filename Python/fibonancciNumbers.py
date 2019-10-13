#Fibonancci Series
#The sum of two elemets defines the next

a,b = 0, 1

while a < 10:
	print(a, end = ' ')
	a, b = b, a+b;
print('\n')