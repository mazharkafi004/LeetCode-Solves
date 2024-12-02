/**
 * @param {string} sentence
 * @param {string} searchWord
 * @return {number}
 */
var isPrefixOfWord = function(sentence, searchWord) {
    const words = sentence.split(" ");
    for (let index = 0; index < words.length; index++) {
        if (words[index].startsWith(searchWord)) {
            return index + 1;
        }
    }
    return -1;
};
