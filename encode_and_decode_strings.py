#!/usr/bin/env python3


class Solution:

    def encode(self, strs):
        res = ""
        for str_ in strs:
            res += str(len(str_)) + ";" + str_
        return res

    def decode(self, s):
        res = []
        i = 0
        while i < len(s):
            tmp = ""
            start = i
            length_of_length = 0
            while s[i] != ";":
                tmp += s[i]
                i += 1
                length_of_length += 1
            tmp = int(tmp)
            res.append(
                s[start + length_of_length + 1 : start + length_of_length + tmp + 1]
            )
            i += tmp + 1
        return res


if __name__ == "__main__":
    strs = ["we", "say", ":", "yes"]
    solution = Solution()
    res = solution.encode(strs)
    print(strs == solution.decode(res))
