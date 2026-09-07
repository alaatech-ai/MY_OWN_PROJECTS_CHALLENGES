text = input("enter a sentence:\n")
words = text.split()
w= len(words)
t =len(text)
avg = sum(len(word) for word in words) / w
print('words:\n', w)
print('char :\n', t)
print(' average words:\n', avg)

