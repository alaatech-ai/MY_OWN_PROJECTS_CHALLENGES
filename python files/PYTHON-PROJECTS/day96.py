def calculate_delivery(weight, zone):
    if weight<=0 :
        return
         
    zone = zone.lower()
    
    if zone =='local' :
        if weight >= 5 :
            return 12
        elif weight >=2:
            return 7
        else:
            return 4
    elif zone == 'remote':
         if weight >= 5 :
            return 20
         elif weight >=2:
            return 12
         else:
            return 7
    else:
        return 
try:
  w = float(input('enter ur weight:\n'))
  z = input('enter zone(local or remote):\n')
  fee= calculate_delivery(w,z)
  print(f"delivery fee: {fee}")
except:
    print('error: invalid name or zone!')


    


        


        