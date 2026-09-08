class Solution(object):
    def countCommas(self, n):
        if n<=999:
            return 0
        # if n>=1000 and n<=9999:
        #     return n-1000
        # elif n>=10000 and n<99999:
        #     return n-10000+1000
        # else:
        #     return 2*(n-)
        return n-999
        