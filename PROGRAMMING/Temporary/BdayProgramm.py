Python 3.6.4 (v3.6.4:d48eceb, Dec 19 2017, 06:04:45) [MSC v.1900 32 bit (Intel)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> a = []
>>> a.append('Kris')
>>> a.append('Stefie')
>>> a.append('Gosho')
>>> a.append('Zara')
>>> a.append('Ivan')
>>> a.append('Koceto')
>>> a.append('Marto J.')
>>> print(a)
['Kris', 'Stefie', 'Gosho', 'Zara', 'Ivan', 'Koceto', 'Marto J.']
>>> print(tuple(a))
('Kris', 'Stefie', 'Gosho', 'Zara', 'Ivan', 'Koceto', 'Marto J.')
>>> print(tuple(a.split))
Traceback (most recent call last):
  File "<pyshell#10>", line 1, in <module>
    print(tuple(a.split))
AttributeError: 'list' object has no attribute 'split'
>>> print(tuple(split.a))
Traceback (most recent call last):
  File "<pyshell#11>", line 1, in <module>
    print(tuple(split.a))
NameError: name 'split' is not defined
>>> print(tuple(split(a)))
Traceback (most recent call last):
  File "<pyshell#12>", line 1, in <module>
    print(tuple(split(a)))
NameError: name 'split' is not defined
>>> print(tuple(a.split(",")))
Traceback (most recent call last):
  File "<pyshell#13>", line 1, in <module>
    print(tuple(a.split(",")))
AttributeError: 'list' object has no attribute 'split'
>>> print(tuple(a).split(","))
Traceback (most recent call last):
  File "<pyshell#14>", line 1, in <module>
    print(tuple(a).split(","))
AttributeError: 'tuple' object has no attribute 'split'
>>> print(a)
['Kris', 'Stefie', 'Gosho', 'Zara', 'Ivan', 'Koceto', 'Marto J.']
>>> print('\n'.join(a))
Kris
Stefie
Gosho
Zara
Ivan
Koceto
Marto J.
>>> for i in a:
	if i == 'Stefie':
		print('Goes')

		
Goes
>>> for i in a:
	if i == 'Stefie':
		print('Goes')
		else:
			
SyntaxError: invalid syntax
>>> for i in a:
	if i == 'Stefie':
		print('Goes')
	else:
		print('We shall see')

		
We shall see
Goes
We shall see
We shall see
We shall see
We shall see
We shall see
>>> for i in a:
	if i == 'Stefie' or i == 'Zara' or i == 'Kris' or i == 'Ivan' or i == 'Koceto' or   :
		print('Goes')
	else:
		print('We shall see')
KeyboardInterrupt
>>> for i in a:
	if i == 'Stefie' or i == 'Zara' or i == 'Kris' or i == 'Ivan' or i == 'Koceto' or   :
		print('Goes')else:
			
SyntaxError: invalid syntax
>>> for i in a:
	if i == 'Stefie' or i == 'Zara' or i == 'Kris' or i == 'Ivan' or i == 'Koceto' or   :
		print('Goes')
		
SyntaxError: invalid syntax
>>> for i in a:
	if i == 'Stefie' or i == 'Zara' or i == 'Kris' or i == 'Ivan' or i == 'Koceto' or i == 'Marto J.':
		print('Goes')
	else:
		print('Ah, Maybe')

		
Goes
Goes
Ah, Maybe
Goes
Goes
Goes
Goes
>>> 
