a=input('First\n')
b=input('Second\n')
d=[]
for l in range(0,len(a)):
  d.append(a[l:len(b)+l])
c=1
for t in d:
  if di == counter(t):
       print('Location ' + str(c))
  c +=1
  
  flag =1
  for k in b:
    if di[k] == a[l:len(b)+l].count(k):
      continue
    else:
      flag=0
      break
  if flag==1:
    print('Location ' + str(l) + ' word ' + a[l:len(b)+l])