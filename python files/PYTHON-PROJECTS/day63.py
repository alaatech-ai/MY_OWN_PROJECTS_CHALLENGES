salary =float(input('input ur salary by month:\n'))
expenses = []
n = int(input('enter the nbr of ur expenses:\n'))
for i in range(n): 
   user = input('add a new expense:\n')
   amount = float(input('enter the amount:\n'))

   expenses.append({'name': user, 'amount': amount})
print(" expenses are:\n", expenses)
total = sum(item['amount'] for item in expenses)
print('total is:\n', total)

saving = float(salary - total)
if(total > salary):
   print('warning! u are over budget\n')

print('savings:\n', saving)