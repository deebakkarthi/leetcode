#!/usr/bin/env python3

def solve(s, t):
    dict_s = {}
    dict_t = {}
    for i in s:
        if i not in dict_s:
            dict_s[i] = 1
        else:
            dict_s[i] += 1

    for i in t:
        if i not in dict_t:
            dict_t[i] = 1
        else:
            dict_t[i] += 1

    return (dict_s == dict_t)

if __name__ == "__main__":
    s = "anagram"
    t = "nagaram"
    print(solve(s, t))
    s = "rat"
    t = "car"
    print(solve(s, t))

