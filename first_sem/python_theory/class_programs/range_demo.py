n=int(input("enter the n value"))
sum=0
for number in range(2,n,2):
    if number %2==0:
        sum=sum+number
print("sum of even numbers",sum)

count=0
for number2 in range(1,n):
    if number2 %3==0 and number2 %5==0:
        count=count+1
print("count of numbers divisible by 3 and 5",count)

is_prime=0
for number3 in range(1,n,+1):
    if number3 >1:
        is_prime=True
        if is_prime ==number3:
            is_prime=False
    if is_prime:
        largest_prime=number3
print(f"the largest prime number found in the range is",is_prime)
