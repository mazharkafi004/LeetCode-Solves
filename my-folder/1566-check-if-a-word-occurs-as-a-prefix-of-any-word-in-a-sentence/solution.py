class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        return next((index + 1 for index, word in enumerate(sentence.split()) if word.startswith(searchWord)), -1)

        
        
