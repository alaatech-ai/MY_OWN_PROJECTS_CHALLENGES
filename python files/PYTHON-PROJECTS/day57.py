text = input( "enter ur sentence: ")
word = text.split()
word_ctr = {}
for word in word :
    if word in word_ctr:
        word_ctr[word]+= 1
    else:
        word_ctr[word] = 1

print(" word fr:\n")
print(word_ctr)
