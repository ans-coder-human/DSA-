
class Solution:
  def kthSmallest(self,arr, l, r, k):
    arr2=arr
    copy = arr*(r+1)
    mini= arr[0]
    ans=[0.01]*(r+1)
    temp=0
    c=0
    r=r+1
    for l in copy:
      if c%(r)==0 and len(arr2)!=0:
        mini=arr2[0]
      if ((l in ans) and (ans.count(l) < arr.count(l))) or( l not in ans):
        if l<mini: 
          temp=l
          mini=l         
      c +=1
      if c%r==0 and len(arr2)!=0:
        arr2.remove(mini)
        ans[int((c/(r))-1)]=mini
    return ans[k-1]
if __name__ == '__main__': 
  n=int(input())
  arr=list(map(int,input().strip().split()))
  k=int(input())
  ob=Solution()
  print(ob.kthSmallest(arr, 0, n-1, k))