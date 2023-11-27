class Solution {

    /**
     * @param String $s
     * @param String $t
     * @return Boolean
     */
    function isSubsequence($s, $t) {
        if(strlen($s)==0){
            return true;
        }
        else if(strlen($t)==0){
            return false;
        }
        $i = 0 ; $j = 0;
        while($j<strlen($t)){
            if($s[$i]==$t[$j]){
                if($i==strlen($s)-1){
                    return true;
                }
                $i++;
            }
            $j++;
        }
        return false;

    }
}
