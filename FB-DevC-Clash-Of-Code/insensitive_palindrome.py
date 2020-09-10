s = input()

if s == s[::-1]:
    print('sensitive palindrome')
elif s.lower() == s[::-1].lower():
    print('insensitive palindrome')
else:
    print('not a palindrome')