/**
 * @param {any} val
 * @return {Object}
 */
const expect = (val) => ({
    toBe: val2 => {
        if (val === val2) {
            return true ;
        }  else{
        throw new Error ("Not Equal") ;
        }
    },
    notToBe: (val2) => {
        if (val !== val2) {
            return true ;
        } else{
        throw new Error ("Equal") ;
        }
    }
});
