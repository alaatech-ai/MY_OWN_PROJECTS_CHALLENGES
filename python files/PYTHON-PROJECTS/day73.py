user = input('enter a site:\n')
cut = user.split()
links = []
for word in cut:
    if word.startswith("http://") or word.startswith("https://"):
        links.append(word)

print(links)

