class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        result, wordsDictionary = [], Counter(words)
        result = sorted(wordsDictionary, key=lambda x: (-wordsDictionary[x], x))
        return result[:k]