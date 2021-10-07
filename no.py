def counter(p): # dictionary
  di={}
  for k in p:
    if k in di:
     di[k] += 1
    else:
     di[k]=1
  return di
def rota(a,n): # Rotation
  return a[n:] +a[:n]
b=input('Second\n')
di=counter(b)
print(f"{di} dictionary")
ite=list(di.values())
k=[]
l=len(ite)
for t in range(0, len(ite)):
  k= k + rota(ite,t)
print(f"{k} rotated")
ite=ite*len(ite)
print(f"{ite} the same value list*length")
p=list(zip(ite,k))
print(p)
print("zipped")
ine=0
for t in p:
  n=t[0]+t[1]
  if n >2 and (t[0]>n/3 or t[1]>n/3) and ine//l !=0:
    print("1")
    break
  ine +=1
if ine==len(ite):
  print("0")




