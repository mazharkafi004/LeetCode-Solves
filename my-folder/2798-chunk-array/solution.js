/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let l = Math.ceil(arr.length/size);
    let ans = [];
    for(let i=0;i<l;i++){
        let temp = [];
        for(let j=0;j<size;j++){
            if(arr[i*size+j] != null){
                temp.push(arr[size*i+j]);
            }
        }
        ans.push(temp);
    }
    return ans;
};

