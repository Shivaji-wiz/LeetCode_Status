// C# IEnumerator interface reference:
// https://docs.microsoft.com/en-us/dotnet/api/system.collections.ienumerator?view=netframework-4.8

class PeekingIterator {
    
    private IEnumerator<int> _iterator;
    private bool _hashNext;
    // iterators refers to the first element of the array.
    public PeekingIterator(IEnumerator<int> iterator) {
        // initialize any member here.
        this._iterator = iterator;
        _hashNext = true;
    }
    
    // Returns the next element in the iteration without advancing the iterator.
    public int Peek() {
        return _iterator.Current;
    }
    
    // Returns the next element in the iteration and advances the iterator.
    public int Next() {
        int res = _iterator.Current;
        this._hashNext = _iterator.MoveNext();
        return res;
    }
    
    // Returns false if the iterator is refering to the end of the array of true otherwise.
    public bool HasNext() {
		return this._hashNext;
    }
}