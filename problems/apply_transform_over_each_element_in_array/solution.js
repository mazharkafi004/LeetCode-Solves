/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let n  = arr.length;
    const array = [];
    for(let i=0;i<n;i++){
         array[i] = fn(arr[i],i);
    } 
    return array;
};