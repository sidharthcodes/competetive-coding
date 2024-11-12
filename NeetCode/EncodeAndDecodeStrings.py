class Solution:

    def encode(self, strs: List[str]) -> str:
        encodedStr = ""
        for s in strs:
            encodedStr += s
            encodedStr += '-'
        return encodedStr

    def decode(self, s: str) -> List[str]:
        decodedStr = s.split('-')
        decodedStr.pop()
        return decodedStr
