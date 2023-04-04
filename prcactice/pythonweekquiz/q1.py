def addition(num):

    if num <= 1:

        return num

    return num + addition(num - 1) # 10+9+8+7+6+5+4+3+2+1=55

res=10
print(addition(res))