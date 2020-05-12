class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        count = 0
        bmap = {'b':0,'a':0,'l':0,'o':0,'n':0}
        for ch in text:
            if ch in bmap:
                if ch == 'l' or ch == 'o':
                    bmap[ch] += 0.5
                else:
                    bmap[ch] += 1
        # print(bmap)
        minb = bmap['b']
        for k,v in bmap.items():
            if math.floor(v) < minb:
                minb = math.floor(v)
        return minb