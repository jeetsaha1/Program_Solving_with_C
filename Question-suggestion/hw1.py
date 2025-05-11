# list1=list(map(int,input("Enter the numbers: ").split()))
# list2=list1[::-1]
# res=[]
# for i in range (len(list1)):
#     for j in range (len(list2)):
#         if i%2==0 and j%2==0:
#             new=list1[i]+list2[j]
#             res.append(new)
# print(new)

input_list = list(map(int, input().split()))  
reversed_list = input_list[::-1] 

new_list = []
for i in range(len(input_list)):
    if i % 2 == 0: 
        new_list.append(input_list[i] + reversed_list[i])
    else:
        new_list.append(input_list[i])

print(" ".join(map(str, new_list)))
