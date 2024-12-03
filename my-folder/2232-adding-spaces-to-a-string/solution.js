/**
 * @param {string} s
 * @param {number[]} spaces
 * @return {string}
 */
var addSpaces = function(s, spaces) {
    var result = "";
    var j = 0;
    for(var i=0;i<s.length;i++){
        if(spaces[j]==i){
            result+=' ';
            j++;
        }
        result+=s[i];
    }
    return result;
};
