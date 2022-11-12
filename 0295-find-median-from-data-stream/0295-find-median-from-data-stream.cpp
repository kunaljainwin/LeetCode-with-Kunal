class MedianFinder {
private:
    priority_queue<int> min; // max_heap for the first half
    priority_queue<int,vector<int>,greater<int> > max; // min_heap for the second half
public:
    // Adds a number into the data structure.
    void addNum(int num) {
        if(min.empty() || (min.top()>num)) min.push(num); // if it belongs to the smaller half
        else max.push(num); 
        
        // rebalance the two halfs to make sure the length difference is no larger than 1
        if(min.size() > (max.size()+1))
        {
            max.push(min.top());
            min.pop();
        }
        else if(min.size()+1<max.size())
        {
        min.push(max.top());
            max.pop();
        }
    }

    // Returns the median of current data stream
    double findMedian() {
        if(min.size() == max.size())return ( (min.top()+max.top())/2.0);
        else return (min.size() > max.size())? min.top():max.top(); 
    }
};