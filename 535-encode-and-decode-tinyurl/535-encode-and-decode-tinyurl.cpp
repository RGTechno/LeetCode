class Solution {
    map<string,string> mp;
    string getRandom()
    {
        char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                              'h', 'i', 'j', 'k', 'l', 'm', 'n',
                              'o', 'p', 'q', 'r', 's', 't', 'u',
                              'v', 'w', 'x', 'y', 'z' };

        string res = "";
        for (int i = 0; i < 5; i++)
            res = res + alphabet[rand()%26];

        return res;
    }
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string turl = "http://tinyurl.com/";
        string end = getRandom();
        
        string eurl = turl+end;
        
        mp[eurl]=longUrl;
        return eurl;    
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));