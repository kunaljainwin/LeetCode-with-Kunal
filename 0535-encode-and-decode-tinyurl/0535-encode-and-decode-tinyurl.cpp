class Solution {
    private:
    string url;
public:

    // Encodes a URL to a shortened URL.
    string encode(string lU) {
        return url=lU;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string sU) {
        return this->url;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));