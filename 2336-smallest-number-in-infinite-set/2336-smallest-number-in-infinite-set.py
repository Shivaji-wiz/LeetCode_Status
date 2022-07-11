class SmallestInfiniteSet:

    def __init__(self):
        self.visited = set(x for x in range(1,1001))

    def popSmallest(self) -> int:
        temp = min(self.visited)
        self.visited.remove(temp)
        return temp

    def addBack(self, num: int) -> None:
        if num not in self.visited:
            self.visited.add(num)


# Your SmallestInfiniteSet object will be instantiated and called as such:
# obj = SmallestInfiniteSet()
# param_1 = obj.popSmallest()
# obj.addBack(num)