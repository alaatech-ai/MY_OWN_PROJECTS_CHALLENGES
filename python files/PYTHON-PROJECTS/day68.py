from sklearn.linear_model import LinearRegression
sizes = [[50], [70], [90], [110], [130]]
prices = [50000, 70000, 90000, 110000, 130000]
model = LinearRegression()
model.fit(sizes, prices)
prds = model.predict([[100]])
print('price:', prds)