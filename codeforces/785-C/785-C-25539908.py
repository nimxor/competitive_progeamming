#python yaar :(
#ayanda se overflow ki galti hue to tu chutiya hai bc
#jab bhi lage overflow ho sakta hai to python use me lale

l=map(int,raw_input().split(' '))
n = l[0]
m = l[1]

def cal(x):
	cnt = x
	cnt += ((x-m-1)*(x-m))/2
	return n<=cnt

if m>=n :
	print n
else :
	lo = m
	hi=1000000000000000000
	ret = 1
	while lo<=hi :
		mid = lo + (hi-lo+1)/2
		if cal(mid):
			ret = mid
			hi = mid-1
		else :
			lo = mid+1
	print ret