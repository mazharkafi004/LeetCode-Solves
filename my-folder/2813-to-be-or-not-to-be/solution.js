/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    let n = val;
    return {
        toBe: function(new_val){
            if(n===new_val){
                return true;
            }
           throw new Error("Not Equal")
        },
        notToBe: function(new_val){
            if(n!==new_val){
                return true;
            }
            throw new Error("Equal")
        }
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
