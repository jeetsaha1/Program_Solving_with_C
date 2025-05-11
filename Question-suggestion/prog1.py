# # # write a program to check a triagle can be fromed and prints area
# import math
# a,b,c=[int(x) for x in input("Enter the number:").split(",")]
# if(a+b>c or b+c>a or c+a>b):
#    s=(a+b+c)/2
#    area=math.sqrt(s*(s-a)*(s-b)*(s-c))
#    print("The area is:",area)



# Frequency of a word
word = list(input("Enter a word : "))
newList, frequency, count = [], [], 0
for i in range(len(word)):
    if word[i] not in newList:
        newList.append(word[i])
        frequency.append(count)
        count = 1
    for j in range(i+1,len(word)):
        if word[i]==word[j]:
            count+=1
    # print(count)
frequency.append(count)
dictionary = dict(zip(newList, frequency[1:]))
print(dictionary)

# num=int(input("Enter: "))
# for i in range(num,0,-1):
#     for j in range(i,0,-1):
#         print(j,end=' ')
#     print('\n')
# for i in range(2,num+1,1):
#     for j in range(i,0,-1):
#         print(j,end=' ')
#     print('\n')
    
    