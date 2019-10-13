#Measure some strings
words = ['cat', 'window', 'defenestrate']
for x in words:
	print(x, len(x))

for x in words[:]:
	if len(x) > 6 :
		words.insert(0, x)
print(words)

for i in range(5):
	print(i)

#for x in words:
#	if len(x) > 6 :
#		words.insert(0, x)

for x in range(5,10):
	print (x)

print("for with step function")
for x in range(0, 10, 5):
	print (x)