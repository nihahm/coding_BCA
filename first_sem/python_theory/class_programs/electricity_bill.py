unit=(input("enter the unit"))
threshold=input("threshold")
category=input("category")
if unit==0-100:
    if category=='commercial':
        amount=unit*10
    if category=='non-commercial':
        amount=unit*5
    if threshold=='yes':
        amount=('total*10')-100
    if threshold=='no':
        amount=('total*5')-50

elif unit==101-300:
    if category=='commercial':
        amount=unit*12
    if category=='non-commercial':
        amount=unit*6
    if threshold=='yes':
        amount==('total*12')-100
    if threshold=='no':
        amount=('total*6')-50
else:
    unit==300
    if category=='commercial':
        amount=unit*15
    if category=='non_commercial':
        amount=unit*8
    if threshold=='yes':
        amount=('total*15')-100
    if threshold=='no':
        amount=('total*8')-50

