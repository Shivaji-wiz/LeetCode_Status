class Solution:
    def minimumLengthEncoding(self, words: List[str]) -> int:
        s = set(words)
        for w in words:
            for j in range(1, len(w)):
                if w[j:] in s:
                    s.remove(w[j:])
        return sum(len(i)+1 for i in s)